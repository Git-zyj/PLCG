/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166174
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
    var_11 -= ((/* implicit */unsigned short) var_2);
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) (((((((_Bool)1) || (((/* implicit */_Bool) (unsigned char)0)))) && (((((/* implicit */_Bool) (unsigned char)7)) || (((/* implicit */_Bool) (unsigned short)255)))))) || (((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-1LL)))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 7; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    {
                        var_12 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) (short)32767)) - (((/* implicit */int) (unsigned char)128))))) == (((unsigned int) ((signed char) (_Bool)1)))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            var_13 = ((/* implicit */unsigned int) ((((long long int) (-9223372036854775807LL - 1LL))) < (((/* implicit */long long int) ((/* implicit */int) ((signed char) (short)-32767))))));
                            var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 7936)) + (15ULL))))));
                        }
                    }
                } 
            } 
        } 
    }
}
