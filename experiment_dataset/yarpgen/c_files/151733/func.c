/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151733
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_1]))))), (arr_0 [i_0])));
                arr_6 [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned char)44)) : (((/* implicit */int) (unsigned char)166))))) ? (arr_3 [(_Bool)1] [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_0]), ((unsigned char)90))))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_1])))))));
                arr_7 [i_0] [(_Bool)1] [(_Bool)1] = ((/* implicit */_Bool) var_16);
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 3) /* same iter space */
                    {
                        arr_14 [(_Bool)1] [(unsigned char)2] [i_3] [i_3] &= 15315641559999274807ULL;
                        arr_15 [i_3] [i_3] [i_2] [i_2] [i_3] [(_Bool)1] = arr_4 [i_2];
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 0; i_5 < 16; i_5 += 3) 
                        {
                            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((3131102513710276800ULL) >> (((3131102513710276792ULL) - (3131102513710276792ULL))))))));
                            arr_22 [i_0] [i_1] [i_2] [i_4] [i_5] = ((/* implicit */_Bool) 13248770944520008173ULL);
                            arr_23 [i_0] [i_1] [i_2] [i_4] [i_5] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) | (arr_19 [i_5])));
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (var_5)));
                        }
                        var_21 = ((((/* implicit */_Bool) var_18)) || (((/* implicit */_Bool) ((16233715661639487536ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)62)))))));
                    }
                    var_22 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)117))) : (3131102513710276808ULL)));
                }
                arr_24 [i_0] = var_18;
            }
        } 
    } 
    var_23 ^= var_16;
    var_24 &= 11475820192306488078ULL;
}
