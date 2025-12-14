/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130087
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
    var_17 = ((/* implicit */short) (((!(((/* implicit */_Bool) (signed char)-63)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)61843)) ? (((/* implicit */int) min((((/* implicit */signed char) var_6)), ((signed char)-63)))) : ((-(((/* implicit */int) var_7))))))) : ((-(min((var_16), (((/* implicit */unsigned int) var_12))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */signed char) max(((unsigned short)38862), ((unsigned short)22905)));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 2; i_2 < 24; i_2 += 4) 
                {
                    var_19 = ((/* implicit */signed char) var_5);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (signed char i_4 = 2; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_2])) >= (((/* implicit */int) var_5)))))) == (var_8)));
                                var_21 |= ((/* implicit */short) var_0);
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                {
                    for (int i_6 = 0; i_6 < 25; i_6 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? ((~(((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0] [i_6])) ? (((/* implicit */long long int) arr_16 [i_0] [i_0])) : (arr_15 [i_0] [i_5] [i_1] [i_0]))))) : (((/* implicit */long long int) 470324990U))));
                            arr_20 [i_0] [i_1] [i_1] [i_1] [i_0] [(unsigned short)16] &= ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_0 [2] [i_0 + 2])) & (((/* implicit */int) ((var_4) <= (((/* implicit */int) var_13)))))))));
                            arr_21 [i_0] [i_1] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (+(((/* implicit */int) (signed char)12))))), (((((/* implicit */_Bool) -1)) ? (((/* implicit */long long int) arr_11 [i_0 + 2] [i_0])) : (arr_17 [i_0] [i_0] [i_0])))))) ? (((((/* implicit */_Bool) min((var_16), (((/* implicit */unsigned int) var_4))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-63)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_6]))))) : (((((/* implicit */_Bool) 3555740089721208596ULL)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                            var_23 = ((/* implicit */unsigned short) min((((/* implicit */int) (short)-2803)), ((+(((int) (unsigned short)49642))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (((-(var_11))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3824642306U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7)))))))) + (min((var_9), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-92)) ? (498424689) : (((/* implicit */int) (short)12342)))))))));
                arr_22 [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_14 [i_0] [i_0] [i_1])))) >> (((((/* implicit */int) var_10)) - (3339)))));
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) (~(((/* implicit */int) (((~(((/* implicit */int) (_Bool)1)))) == (var_4))))));
    var_26 -= ((/* implicit */unsigned long long int) var_12);
}
