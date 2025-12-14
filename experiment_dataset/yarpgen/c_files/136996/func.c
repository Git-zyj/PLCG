/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136996
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
    var_18 = ((/* implicit */_Bool) var_12);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        arr_8 [i_3] = (~(((((/* implicit */int) arr_6 [i_3] [i_1] [i_1] [i_0])) + (((arr_0 [i_0]) % (((/* implicit */int) (short)-32760)))))));
                        arr_9 [i_0] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */short) (~(((/* implicit */int) ((_Bool) (short)-32760)))));
                    }
                    /* vectorizable */
                    for (long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        var_19 = ((/* implicit */_Bool) arr_4 [i_1] [i_2] [i_1]);
                        arr_13 [i_0] [i_1] [9ULL] = ((((/* implicit */int) ((((/* implicit */int) (short)-32755)) >= (arr_12 [i_0] [(_Bool)1] [i_0])))) & ((~(((/* implicit */int) var_7)))));
                    }
                    arr_14 [i_0] [i_1] = ((/* implicit */short) max((((((/* implicit */int) max((var_12), ((short)-32764)))) | (((/* implicit */int) (short)-32755)))), (((((arr_4 [i_0] [i_1] [i_2]) < (((/* implicit */unsigned int) arr_12 [i_0] [i_1] [(signed char)9])))) ? (((/* implicit */int) ((unsigned short) 7844252017732868374ULL))) : (((/* implicit */int) arr_2 [i_2] [i_0]))))));
                    var_20 -= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((int) max((((/* implicit */unsigned long long int) var_16)), (7844252017732868374ULL))))), (min((((unsigned long long int) arr_0 [i_0])), (((/* implicit */unsigned long long int) (short)27968))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) var_1);
}
