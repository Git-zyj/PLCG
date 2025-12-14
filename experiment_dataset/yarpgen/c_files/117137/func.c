/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117137
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
    var_13 += ((/* implicit */unsigned short) 3403294121732671208LL);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 9; i_4 += 1) 
                        {
                            {
                                var_14 = ((unsigned char) var_5);
                                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((3740010650U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_4] [(_Bool)1] [i_2] [8] [i_0])))))) ? (arr_7 [i_3] [i_2] [i_2] [i_3]) : (((/* implicit */int) arr_0 [i_0]))));
                            }
                        } 
                    } 
                    var_16 = (((-(((/* implicit */int) ((444589334U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2])))))))) < (((/* implicit */int) (unsigned char)219)));
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned short) (unsigned char)219);
    }
}
