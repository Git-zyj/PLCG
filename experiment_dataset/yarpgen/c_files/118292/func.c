/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118292
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
    var_11 = ((/* implicit */unsigned short) var_9);
    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) (-(((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((var_5) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_6))) : (((/* implicit */long long int) (~(var_9)))))))))));
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (+((((-(var_3))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (signed char)-99)))))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_14 -= ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [15LL] [15LL])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)53))) : (var_8)))))) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 684379073U)) && (var_0))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3459123758684950322LL))))) : (min((arr_2 [i_0]), (((/* implicit */int) arr_0 [(short)4]))))))) : (max((min((var_9), (684379073U))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_1)))))));
                var_15 -= ((/* implicit */signed char) (!(var_0)));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_2 = 1; i_2 < 24; i_2 += 4) 
                {
                    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1757191831)) ? ((~(var_3))) : (((/* implicit */unsigned long long int) 3610588198U))));
                    arr_10 [i_2] [21ULL] [(short)23] = ((/* implicit */int) ((long long int) 11719476668933693436ULL));
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (_Bool)1))));
                    arr_11 [(signed char)18] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [(unsigned short)2]))));
                    arr_12 [(signed char)4] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_2 - 1])) ? (((((/* implicit */_Bool) (signed char)121)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))) : (((var_9) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)120)))))));
                }
                /* vectorizable */
                for (long long int i_3 = 1; i_3 < 24; i_3 += 4) /* same iter space */
                {
                    var_18 = ((/* implicit */short) ((long long int) arr_13 [i_0] [22] [i_3 + 1]));
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (signed char)127)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (unsigned char)113))))) : (((/* implicit */int) arr_14 [i_0] [i_3 + 1] [19LL])))))));
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        var_20 = ((/* implicit */int) ((unsigned long long int) ((signed char) (signed char)-99)));
                        arr_19 [i_4 - 1] [i_4 - 1] [i_1] [i_4 - 1] [i_0] [i_4 - 1] = ((/* implicit */long long int) arr_16 [i_4 - 1] [18] [i_3 + 1]);
                        arr_20 [(signed char)1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) var_1)) ^ (arr_3 [i_4 - 1])));
                        /* LoopSeq 3 */
                        for (int i_5 = 1; i_5 < 24; i_5 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) ((((/* implicit */_Bool) (signed char)126)) && (((/* implicit */_Bool) 3601420483U)))))));
                            var_22 ^= ((/* implicit */short) var_1);
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_21 [i_1] [i_1])) ^ (12143646527714909166ULL)));
                        }
                        for (short i_6 = 2; i_6 < 24; i_6 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [13ULL] [i_4 - 1] [20ULL] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_4 - 1] [(_Bool)1] [8LL]))) : (arr_3 [i_0])))))))));
                            var_25 = (-(-4674061389024111396LL));
                            var_26 -= ((/* implicit */unsigned short) var_3);
                            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) (+(arr_18 [i_0] [i_0] [i_3] [i_4 - 1]))))));
                            var_28 = ((/* implicit */signed char) max((var_28), (((signed char) ((((/* implicit */int) arr_17 [i_0] [i_1] [i_3] [i_3 - 1])) ^ (((/* implicit */int) (signed char)121)))))));
                        }
                        for (signed char i_7 = 0; i_7 < 25; i_7 += 1) 
                        {
                            var_29 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_3 - 1] [i_0] [i_4 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_3 - 1]))) : (((((/* implicit */_Bool) arr_25 [i_1])) ? (arr_6 [i_3] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_0])))))));
                            arr_28 [i_0] [i_0] [i_3 - 1] [21ULL] [i_0] [18U] [(signed char)0] = ((/* implicit */unsigned long long int) ((684379122U) <= (arr_1 [i_4 - 1] [i_4 - 1])));
                        }
                    }
                }
                for (long long int i_8 = 1; i_8 < 24; i_8 += 4) /* same iter space */
                {
                    var_30 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_4)) <= (((/* implicit */int) arr_14 [4LL] [(short)12] [i_8 - 1])))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_14 [18ULL] [16LL] [i_8 - 1])) ^ (((/* implicit */int) arr_14 [i_8] [i_1] [i_8 - 1])))))));
                    var_31 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) (signed char)-121))) ? (arr_13 [i_8 + 1] [i_8 + 1] [i_8 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 792439291U)) && (var_0)))))))) : (var_6)));
                }
            }
        } 
    } 
}
