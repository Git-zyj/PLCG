/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114061
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
    var_12 = ((((/* implicit */_Bool) (unsigned char)114)) ? (((/* implicit */int) (unsigned char)94)) : (((/* implicit */int) (unsigned char)160)));
    var_13 = (unsigned short)29518;
    var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned short) (unsigned char)144);
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [(unsigned short)14]))))) ? (((/* implicit */int) arr_1 [9ULL])) : (((/* implicit */int) (unsigned char)75))))) ? (((/* implicit */int) (!(var_7)))) : (((((/* implicit */_Bool) max((var_10), (((/* implicit */int) var_4))))) ? (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_1 [(signed char)11])))) : (((/* implicit */int) var_4))))));
        arr_3 [11] [7ULL] = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_2 [i_0] [i_0]))), (arr_2 [(signed char)13] [i_0])));
    }
    /* LoopNest 2 */
    for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            {
                arr_11 [i_1] [19] = ((/* implicit */short) ((((/* implicit */int) arr_8 [(unsigned char)14] [i_1] [(_Bool)0])) / (((/* implicit */int) (_Bool)1))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    arr_15 [(_Bool)1] [i_1] = ((/* implicit */short) arr_10 [(_Bool)1]);
                    /* LoopSeq 1 */
                    for (signed char i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) ((unsigned short) arr_8 [(_Bool)1] [i_1] [4]));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 3) 
                        {
                            var_18 = ((/* implicit */_Bool) (unsigned char)144);
                            var_19 = (~(((/* implicit */int) (unsigned char)115)));
                            arr_21 [i_1] [(signed char)12] [(unsigned short)16] [(unsigned short)2] [(unsigned short)7] = ((/* implicit */unsigned long long int) (~(var_10)));
                            var_20 = ((/* implicit */short) var_6);
                            var_21 = ((/* implicit */_Bool) arr_19 [(_Bool)1] [(unsigned char)1] [(_Bool)1] [(signed char)14] [0] [(unsigned short)4]);
                        }
                        arr_22 [(_Bool)1] [9U] [12ULL] [(signed char)13] [(unsigned short)11] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 18090352667014954731ULL))));
                    }
                    var_22 = ((/* implicit */_Bool) (-(5490932822182543938ULL)));
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_9))))) > (var_0)));
                }
                for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 2) 
                {
                    arr_25 [(signed char)11] [i_1] = ((/* implicit */short) max((arr_4 [(signed char)5] [(unsigned short)12]), (((/* implicit */unsigned int) max((((/* implicit */int) var_7)), (-456850159))))));
                    var_24 = ((/* implicit */short) arr_9 [15ULL] [16] [(_Bool)1]);
                    arr_26 [i_1] = ((/* implicit */_Bool) (((~(((/* implicit */int) var_6)))) * (((/* implicit */int) arr_9 [4U] [(unsigned char)14] [(unsigned short)16]))));
                    arr_27 [(unsigned char)13] [i_1] [(unsigned short)2] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)4491))));
                    arr_28 [(signed char)1] [(unsigned short)16] [i_1] [(_Bool)1] = max((var_2), (((/* implicit */unsigned short) arr_13 [(_Bool)1] [14U] [(unsigned char)3])));
                }
            }
        } 
    } 
}
