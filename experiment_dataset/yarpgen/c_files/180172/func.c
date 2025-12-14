/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180172
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
    var_17 = ((/* implicit */long long int) (unsigned short)65521);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned char) (+((~(((/* implicit */int) (unsigned short)65535))))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        arr_12 [i_0] [i_0] [(signed char)8] [(_Bool)1] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) (unsigned short)7)) < (((/* implicit */int) arr_5 [i_0] [i_2] [i_3])))));
                        arr_13 [5LL] [5LL] [i_2] [5LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) 27021597764222976ULL))) << (((/* implicit */int) (signed char)7))))) ? ((+(((/* implicit */int) (unsigned short)1)))) : (((/* implicit */int) arr_5 [15U] [i_1] [i_3]))));
                    }
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) == (((arr_3 [i_0] [i_1] [i_2]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)65535))))));
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65531)) ? (((/* implicit */int) (unsigned char)49)) : (((/* implicit */int) (signed char)-25))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (unsigned int i_5 = 1; i_5 < 22; i_5 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_6 = 3; i_6 < 21; i_6 += 1) 
                {
                    for (unsigned short i_7 = 0; i_7 < 23; i_7 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned int i_8 = 0; i_8 < 23; i_8 += 3) 
                            {
                                var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_7])) ? ((-(-3573958434672734458LL))) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))), (((((/* implicit */_Bool) (short)-32758)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (0ULL)))));
                                var_21 = max(((-(arr_26 [i_7] [i_8]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1373209758U)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_4] [i_4] [i_4] [i_4] [i_4]))))))))));
                                var_22 -= ((/* implicit */unsigned long long int) (unsigned short)7);
                            }
                            var_23 |= ((/* implicit */_Bool) (-((-(((/* implicit */int) var_9))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned int) (unsigned short)32767);
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 23; i_9 += 1) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            arr_39 [i_4] [(signed char)6] [i_9] = ((/* implicit */signed char) (((+(((/* implicit */int) var_5)))) == (min((arr_22 [i_10] [i_5 + 1] [i_4]), (((/* implicit */int) arr_27 [i_4] [i_4] [i_4]))))));
                            var_25 |= ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) ((unsigned short) (signed char)-20))) != (var_10))))));
                            var_26 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_31 [(unsigned short)2] [i_5 + 1] [i_5 - 1] [i_5] [i_4] [i_4] [(unsigned short)2])) ? (arr_24 [3U] [i_5] [(signed char)21]) : (arr_24 [i_5] [i_5] [i_4]))) >> ((((+(((/* implicit */int) arr_31 [20ULL] [i_5 + 1] [i_5] [(short)4] [i_5 - 1] [i_5] [20ULL])))) - (103)))));
                        }
                    } 
                } 
                arr_40 [i_4] = ((/* implicit */unsigned short) (((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54956))) : (max((27021597764222976ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))) <= (((((/* implicit */_Bool) 0ULL)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9465)))))));
            }
        } 
    } 
}
