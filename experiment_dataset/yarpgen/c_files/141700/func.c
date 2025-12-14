/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141700
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    arr_7 [i_0] [i_1 + 2] [(_Bool)1] = ((/* implicit */unsigned short) arr_4 [i_2] [(signed char)1] [i_0]);
                    var_11 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-(((/* implicit */int) (short)32766))))) ? (min((arr_4 [i_2] [10LL] [10LL]), (arr_4 [(short)4] [i_1 - 2] [i_1 - 2]))) : (((((/* implicit */_Bool) var_9)) ? (arr_4 [i_0] [i_1 + 1] [i_1 + 1]) : (((/* implicit */unsigned long long int) -1264099649)))))) / (((/* implicit */unsigned long long int) var_9))));
                    var_12 -= ((/* implicit */unsigned short) ((((max((-874510919), (((/* implicit */int) (short)-25202)))) < (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) || (((/* implicit */_Bool) 4336978887471522978ULL))))))) ? (var_3) : (((((/* implicit */_Bool) min((18183584455846140342ULL), (((/* implicit */unsigned long long int) var_0))))) ? (arr_0 [i_0] [i_1 - 2]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_10 [i_1] [i_1] [i_1 - 2] [i_1 - 2] &= ((/* implicit */unsigned long long int) ((_Bool) max((arr_0 [i_1 + 2] [i_3]), (arr_0 [i_1 - 1] [i_3]))));
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned short) var_6))))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
                    arr_12 [i_3] [i_1] [i_1] [i_0] |= ((/* implicit */unsigned char) min((((/* implicit */unsigned short) ((_Bool) (short)-25618))), (arr_3 [i_0])));
                    var_13 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((unsigned short) (((_Bool)1) ? (((/* implicit */int) (short)25201)) : (((/* implicit */int) arr_6 [i_0] [i_1] [(unsigned short)2] [i_1])))))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_1] [i_1] [i_1] [i_0])) ^ (((/* implicit */int) arr_1 [(unsigned char)10]))))) ? (min((((/* implicit */unsigned long long int) var_9)), (arr_2 [i_0] [(signed char)3]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)6147)))))))));
                    var_14 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 + 1])) ? (min((((/* implicit */unsigned long long int) var_6)), (arr_2 [i_0] [i_3]))) : (((/* implicit */unsigned long long int) -4753623394754907919LL)))) : (((/* implicit */unsigned long long int) var_3))));
                }
                var_15 -= ((/* implicit */unsigned char) (short)6147);
            }
        } 
    } 
    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) (+(((unsigned long long int) min((var_6), ((short)-24752)))))))));
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (~(14109765186238028632ULL))))));
    /* LoopNest 3 */
    for (signed char i_4 = 4; i_4 < 18; i_4 += 1) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 4) 
        {
            for (short i_6 = 0; i_6 < 20; i_6 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_7 = 1; i_7 < 17; i_7 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_8 = 2; i_8 < 19; i_8 += 2) 
                        {
                            arr_26 [i_4] [(_Bool)1] [i_6] [i_7] [i_8] = ((/* implicit */short) min((((arr_23 [i_4 - 4] [i_4] [i_6] [i_5]) ? (((/* implicit */int) arr_16 [i_4])) : (((/* implicit */int) arr_23 [i_5] [i_4] [i_7] [i_8])))), (((/* implicit */int) ((unsigned short) arr_16 [i_4])))));
                            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) arr_18 [i_8] [i_6]))));
                            arr_27 [i_4] [i_4] [i_4] [i_4] [i_8] = ((signed char) (short)-6154);
                            arr_28 [i_8] [(short)0] [i_6] [(signed char)10] [10] [i_8] [i_8] |= ((/* implicit */short) (-(((((/* implicit */int) arr_17 [i_4] [i_8])) | (((/* implicit */int) var_0))))));
                        }
                        /* vectorizable */
                        for (long long int i_9 = 4; i_9 < 19; i_9 += 4) 
                        {
                            var_19 |= ((/* implicit */short) arr_30 [i_4]);
                            var_20 = var_1;
                        }
                        /* vectorizable */
                        for (signed char i_10 = 3; i_10 < 17; i_10 += 4) 
                        {
                            arr_35 [i_4] [(unsigned short)3] [(signed char)15] = ((/* implicit */unsigned short) (~(var_7)));
                            arr_36 [i_4] [i_7] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_4]))) & (arr_22 [i_4] [i_5] [i_6] [i_5] [i_10 + 2] [i_4])));
                            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_25 [9ULL] [i_5] [i_6] [i_7] [i_10 - 1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) && (((/* implicit */_Bool) arr_31 [i_4] [i_5] [i_6] [i_5] [i_10 + 3])))))));
                            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((((/* implicit */unsigned long long int) -115218184)) % (18183584455846140343ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_5] [i_10 - 2]))))))));
                        }
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) min((((unsigned short) arr_17 [i_4 - 3] [i_5])), (((/* implicit */unsigned short) ((short) ((arr_30 [16ULL]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [10LL] [i_5]))))))))))));
                    }
                    arr_37 [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((long long int) arr_30 [i_4 + 2]))) | (14109765186238028634ULL)));
                }
            } 
        } 
    } 
}
