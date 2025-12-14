/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110907
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 24; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned char)255), ((unsigned char)56)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))))))));
                            var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) arr_9 [i_0] [i_1] [i_1]))));
                            arr_12 [i_0] [i_0] [i_2 + 1] [9LL] = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_12)) ? (min((arr_4 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_9 [1U] [1U] [i_3])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_7 [i_0])), (var_4))))));
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(var_4)))) / (min((((/* implicit */unsigned long long int) var_12)), (arr_4 [i_0] [i_0])))))) ? (arr_5 [i_2] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */int) ((unsigned short) (unsigned char)23))) : ((+(((/* implicit */int) (short)-4096)))))))));
                /* LoopSeq 2 */
                for (unsigned short i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    arr_15 [i_0] [i_1] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-46))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) 8917150618544439217ULL)))) : (min((((/* implicit */long long int) arr_3 [23LL])), (9223372036854775802LL))))))));
                    arr_16 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((signed char) (signed char)-4));
                    var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_4] [i_0])) ? (arr_8 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [(short)24] [i_0] [16LL])))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_3))))) : (((long long int) (_Bool)0)))))));
                }
                /* vectorizable */
                for (unsigned char i_5 = 0; i_5 < 25; i_5 += 2) 
                {
                    arr_20 [i_0] [i_0] [2U] = 2194741374615152391LL;
                    var_21 = ((/* implicit */unsigned short) (+(arr_5 [i_0] [10U])));
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_6 = 3; i_6 < 24; i_6 += 2) 
                {
                    var_22 += ((/* implicit */signed char) (~(((((/* implicit */unsigned long long int) var_10)) & (17147639283668484103ULL)))));
                    var_23 = ((/* implicit */short) var_3);
                    var_24 = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
                }
                /* vectorizable */
                for (long long int i_7 = 0; i_7 < 25; i_7 += 3) 
                {
                    arr_29 [i_0] [i_0] [i_1] [(short)22] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_15)) % (((/* implicit */int) (unsigned char)232))))) ? (var_7) : (((/* implicit */unsigned long long int) ((long long int) 17424591465351393317ULL)))));
                    var_25 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_15)) >> (((arr_10 [i_1] [i_1] [i_1] [i_0]) - (11260541954425443488ULL)))))) ? (var_4) : (((/* implicit */int) var_12))));
                    var_26 &= ((/* implicit */long long int) ((signed char) arr_22 [i_0] [i_0]));
                }
                var_27 = ((/* implicit */_Bool) var_3);
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned int) var_11);
}
