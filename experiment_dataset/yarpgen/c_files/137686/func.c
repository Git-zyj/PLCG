/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137686
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) -1965560755)) ? (arr_0 [i_0 + 1] [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [8ULL] [i_1] [i_1]))))))));
                    var_17 = ((/* implicit */short) arr_6 [i_2] [i_1] [i_0]);
                }
                for (unsigned char i_3 = 3; i_3 < 15; i_3 += 3) 
                {
                    arr_9 [i_1] [i_1] [i_1] [1U] = ((/* implicit */long long int) arr_2 [i_0 + 1]);
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_8 [(_Bool)1] [i_1])) | ((-2147483647 - 1)))))))) < (((/* implicit */int) (_Bool)1))));
                }
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_5 [i_0 + 1] [i_0 + 1] [i_1] [i_1]), (arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])))) & (((((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0])) ^ (((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1] [i_1] [i_1]))))));
                var_20 = ((/* implicit */int) var_4);
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-8192))) < (arr_1 [i_1] [i_0]))))) ^ (((/* implicit */int) ((arr_0 [i_0 + 1] [i_0 + 1]) == (arr_0 [i_0 + 1] [i_0 + 1])))))))));
                var_22 = ((/* implicit */unsigned long long int) max((((/* implicit */short) var_2)), (((short) arr_7 [(unsigned char)12] [i_1] [i_0 + 1]))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) max((((((/* implicit */unsigned long long int) (+(var_10)))) > ((-(0ULL))))), (((((/* implicit */int) (short)-2374)) < (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
    /* LoopSeq 2 */
    for (unsigned short i_4 = 2; i_4 < 13; i_4 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) (~(2652673669562226799LL))))));
        var_25 = ((/* implicit */unsigned long long int) (+(((int) (+(((/* implicit */int) var_4)))))));
        var_26 = ((/* implicit */unsigned short) ((_Bool) arr_4 [i_4 + 1] [i_4 + 1] [i_4 + 1]));
    }
    for (unsigned short i_5 = 2; i_5 < 13; i_5 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned char) ((unsigned int) ((((((/* implicit */_Bool) arr_0 [i_5] [i_5])) ? (arr_10 [i_5] [1]) : (arr_13 [i_5]))) != (((/* implicit */long long int) var_7)))));
        arr_16 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((~(arr_6 [i_5] [i_5] [(short)10]))) | (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_5 [i_5] [13LL] [i_5] [i_5])), ((unsigned char)196)))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_5] [i_5 + 1]))) : (((((/* implicit */long long int) ((/* implicit */int) ((short) 3115425065U)))) % (var_8)))));
        var_28 = ((/* implicit */unsigned short) arr_8 [i_5] [8ULL]);
    }
    var_29 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -9021415830164603199LL))));
    var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) var_14))));
}
