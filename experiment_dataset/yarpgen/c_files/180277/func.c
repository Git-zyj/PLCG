/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180277
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            for (unsigned int i_2 = 3; i_2 < 21; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) (-(arr_3 [i_0] [i_1] [i_2])));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        var_14 = ((/* implicit */unsigned char) ((_Bool) arr_7 [i_0] [i_3]));
                        arr_10 [i_0] [i_0] [i_2] [i_0] = ((max((min((((/* implicit */long long int) (short)-11002)), (var_9))), (((/* implicit */long long int) arr_7 [i_0] [i_0])))) <= (min((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) < (-9132872706663421989LL)))), (arr_8 [i_0] [i_1] [i_2] [5U] [i_3] [i_3]))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 1; i_4 < 22; i_4 += 2) 
                        {
                            arr_13 [i_0] = ((/* implicit */unsigned long long int) var_4);
                            var_15 = ((/* implicit */unsigned long long int) max((1986359928U), (((/* implicit */unsigned int) var_12))));
                            var_16 -= ((((/* implicit */int) (short)30738)) <= (((/* implicit */int) min((arr_9 [i_0] [i_1 + 1] [i_1 + 1] [i_1] [i_4 - 1]), (((_Bool) arr_3 [i_0] [i_0] [i_0]))))));
                            var_17 ^= ((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_0 [i_0]))))) != (arr_11 [i_3])))), ((signed char)116)));
                        }
                    }
                    var_18 -= ((/* implicit */_Bool) 5871420124043895061LL);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        for (unsigned short i_6 = 0; i_6 < 15; i_6 += 2) 
        {
            {
                arr_20 [(_Bool)1] [(_Bool)1] [i_6] = ((/* implicit */unsigned int) ((long long int) var_0));
                var_19 |= ((/* implicit */short) ((_Bool) var_6));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) var_7);
}
