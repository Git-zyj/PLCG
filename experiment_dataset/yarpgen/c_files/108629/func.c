/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108629
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
    var_10 = ((/* implicit */unsigned char) (+((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_3)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_6 [i_0] = (!(((/* implicit */_Bool) max((arr_2 [i_0 - 1]), (arr_2 [i_0 - 1])))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 1; i_2 < 18; i_2 += 2) 
                {
                    arr_9 [(unsigned char)8] [i_0] [i_0] [(unsigned char)8] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(unsigned char)0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) : (var_5)))) ? (arr_5 [i_0 + 1] [i_2] [i_2 - 1]) : (((/* implicit */long long int) (~(((/* implicit */int) (short)-11938))))))));
                    arr_10 [(unsigned char)3] [i_0] [i_0 - 1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)122), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)189))) > (-2584634075151166962LL)))))))) < (var_5)));
                }
                /* LoopSeq 4 */
                for (unsigned int i_3 = 3; i_3 < 18; i_3 += 4) 
                {
                    arr_14 [i_0] [i_0] = ((/* implicit */unsigned short) min((arr_11 [i_3 + 1] [i_1] [(unsigned short)9] [(signed char)17]), ((+(min((1516099092U), (((/* implicit */unsigned int) (unsigned char)96))))))));
                    var_11 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0 + 1] [(unsigned short)5] [i_0 + 1] [i_3 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)107))) : (arr_11 [i_0 + 1] [i_1] [i_1] [i_3 - 3])))) < (min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)235)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_4 [i_0 - 1]))))), (var_0)))));
                    arr_15 [i_0] [(signed char)18] = ((/* implicit */short) ((unsigned char) ((signed char) arr_4 [i_0])));
                }
                for (unsigned char i_4 = 0; i_4 < 20; i_4 += 2) /* same iter space */
                {
                    var_12 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (-(var_3)))) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_7)), ((unsigned char)159)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-26070)))))))));
                    var_13 ^= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_0 [i_1]))))));
                    var_14 = ((((/* implicit */_Bool) ((unsigned int) min(((unsigned char)234), ((unsigned char)101))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)107)) ? (((/* implicit */int) (unsigned char)107)) : (((/* implicit */int) arr_4 [i_0 - 1]))))) : (((long long int) -4679584088805207330LL)));
                }
                for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) /* same iter space */
                {
                    var_15 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_8 [(unsigned char)5] [(unsigned char)5] [i_1] [i_0 + 1])) ^ (((/* implicit */int) arr_8 [i_0 - 1] [i_0 - 1] [i_5] [i_0 + 1])))) ^ (((((/* implicit */int) arr_8 [i_0] [i_1] [i_5] [i_0 + 1])) | (((/* implicit */int) var_2))))));
                    arr_20 [i_0] [i_1] [i_0] = ((unsigned char) arr_3 [i_0] [i_1] [i_0]);
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)28407)) > (max(((-(((/* implicit */int) arr_1 [i_5])))), (((((/* implicit */_Bool) (signed char)-101)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)16))))))));
                }
                for (unsigned char i_6 = 0; i_6 < 20; i_6 += 2) /* same iter space */
                {
                    arr_23 [i_0] [(_Bool)1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_17 [i_0] [i_0 - 1]), (((/* implicit */long long int) var_9))))) ? (((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) arr_21 [i_0])))) : ((+(((/* implicit */int) var_2))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_7 = 4; i_7 < 17; i_7 += 1) 
                    {
                        arr_26 [i_0] [i_7 + 3] [i_6] [(unsigned char)0] = var_1;
                        arr_27 [(signed char)3] [(signed char)3] [i_1] [i_0] [(signed char)3] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)0))));
                        arr_28 [i_7] [i_6] [i_0] [i_0] [i_1] [i_0 - 1] = ((/* implicit */_Bool) (unsigned char)107);
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 0; i_8 < 20; i_8 += 3) 
                        {
                            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)-13779)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_6] [i_7 + 3] [i_6]))) : (var_3))))));
                            var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_19 [i_0] [i_1]))));
                            var_19 |= ((/* implicit */long long int) ((unsigned short) (_Bool)1));
                            var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)206)) : (((/* implicit */int) arr_7 [i_1] [i_6] [i_8])))) | (((/* implicit */int) (unsigned short)13614))));
                            arr_31 [i_0] [i_1] [i_1] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((long long int) 137775718U)) * (((/* implicit */long long int) ((/* implicit */int) ((short) (_Bool)1))))));
                        }
                    }
                }
                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((signed char) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_30 [i_1] [i_1] [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_2 [i_1]))))))))));
                arr_32 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)26345))) ? ((+(((/* implicit */int) arr_13 [i_0] [i_1] [i_0 + 1] [(unsigned char)13])))) : (((/* implicit */int) max((((/* implicit */short) arr_3 [i_0] [i_0] [i_1])), ((short)14164))))));
            }
        } 
    } 
}
