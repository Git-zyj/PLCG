/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17763
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((unsigned int) 527765581332480LL))) * (((arr_7 [i_0] [i_0] [i_0]) - (arr_7 [i_0] [i_1] [i_2])))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */short) min((((((/* implicit */_Bool) var_18)) ? (arr_11 [i_0] [5ULL] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-2))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)23))) == (14106856188177693500ULL))))));
                                arr_14 [i_4] [i_3] [i_2] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) (unsigned char)184);
                                var_21 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) + (var_10)))) ? (((/* implicit */long long int) var_1)) : (min((((/* implicit */long long int) max((((/* implicit */int) var_17)), (arr_8 [i_0] [i_4])))), (max((arr_4 [i_4]), (((/* implicit */long long int) var_14))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)142))) : ((+(var_6)))));
    var_23 = ((/* implicit */unsigned int) var_11);
    var_24 = ((/* implicit */unsigned char) max((1841203220), (((/* implicit */int) (unsigned char)104))));
    /* LoopNest 3 */
    for (int i_5 = 3; i_5 < 11; i_5 += 3) 
    {
        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 12; i_7 += 3) 
            {
                {
                    var_25 *= ((/* implicit */int) ((((((/* implicit */_Bool) arr_12 [i_5 - 3] [(signed char)10] [10U] [i_5 - 3] [i_5 + 1] [i_5 - 1])) && ((!(((/* implicit */_Bool) 3237058453U)))))) || (((/* implicit */_Bool) (unsigned short)2112))));
                    var_26 = ((/* implicit */short) (unsigned char)152);
                    var_27 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_6 [i_6])) | (((18107920356068391676ULL) & (((/* implicit */unsigned long long int) var_6))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_5] [i_6])) ? (((/* implicit */int) arr_10 [i_5] [i_5] [i_5] [i_7])) : (((/* implicit */int) (short)13254))))) ? ((~(0))) : ((~(((/* implicit */int) (unsigned short)34471))))))) : (((max((arr_19 [i_7] [i_6] [i_7]), (((/* implicit */unsigned long long int) var_1)))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) | (4339887885531858122ULL)))))));
                    var_28 = ((/* implicit */int) var_14);
                    var_29 = ((/* implicit */short) ((unsigned int) 1023ULL));
                }
            } 
        } 
    } 
}
