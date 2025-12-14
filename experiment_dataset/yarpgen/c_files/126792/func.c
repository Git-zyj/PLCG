/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126792
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_13 = ((/* implicit */_Bool) min((((/* implicit */long long int) var_4)), ((~(arr_0 [i_0])))));
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned int) arr_1 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)63638)))))))))))));
        var_15 = ((/* implicit */unsigned short) (((-(((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-121)), ((unsigned short)63627)))))) != ((((-(((/* implicit */int) (short)0)))) | (((/* implicit */int) arr_1 [i_0]))))));
    }
    /* LoopNest 2 */
    for (short i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        for (short i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            {
                arr_11 [i_1] [i_1] [i_2] = ((unsigned short) ((unsigned short) (~(((/* implicit */int) (unsigned short)1898)))));
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) < (621570584U))))));
                /* LoopNest 2 */
                for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    for (int i_4 = 0; i_4 < 13; i_4 += 1) 
                    {
                        {
                            var_17 += ((/* implicit */unsigned short) (_Bool)0);
                            arr_17 [i_1] = ((/* implicit */unsigned char) var_7);
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) min((min((var_1), (((/* implicit */unsigned long long int) min((((/* implicit */short) (unsigned char)160)), (var_6)))))), (((/* implicit */unsigned long long int) var_11)))))));
    var_19 = ((/* implicit */unsigned char) var_5);
}
