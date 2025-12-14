/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157041
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
    var_18 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((7273346151869312972ULL) | (((/* implicit */unsigned long long int) var_0))))) ? (((var_7) * (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min((((/* implicit */signed char) var_2)), (var_1)))))), (max((var_17), (max((var_10), (((/* implicit */int) var_15))))))));
    var_19 &= ((/* implicit */int) (-9223372036854775807LL - 1LL));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 15; i_3 += 1) /* same iter space */
                    {
                        var_20 &= (-(max((2235371031625398342ULL), (((/* implicit */unsigned long long int) (short)-16384)))));
                        var_21 = max((max((178679784U), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [(_Bool)1]))))))), ((-(arr_4 [i_2] [i_3 + 1] [i_3 + 1] [i_3 - 1]))));
                    }
                    for (unsigned long long int i_4 = 2; i_4 < 15; i_4 += 1) /* same iter space */
                    {
                        var_22 *= ((/* implicit */unsigned int) ((max((((/* implicit */unsigned int) ((((((/* implicit */int) (short)-16376)) + (2147483647))) << (((var_10) - (2125471639)))))), (arr_6 [i_0] [i_0] [i_0] [i_4 + 1]))) <= (((/* implicit */unsigned int) ((((/* implicit */int) max((arr_1 [i_1]), ((unsigned char)128)))) * (((/* implicit */int) (unsigned short)41648)))))));
                        var_23 += max(((short)-2108), ((short)-16386));
                        arr_13 [i_0] [7U] [i_2] [i_2] [i_2] = (((((~(269370293))) + (2147483647))) >> (((min((((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_0] [i_0])), (max((((/* implicit */unsigned int) arr_2 [i_0] [i_0] [2])), (3041409068U))))) - (22778U))));
                    }
                    var_24 = ((/* implicit */signed char) max((min((arr_7 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) ((signed char) 2006486442U))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-24798)), (arr_12 [i_0] [i_0] [i_0] [3LL] [i_0])))) ? (max((arr_8 [i_0] [i_0] [i_1] [i_2]), (((/* implicit */long long int) (unsigned short)58903)))) : (max((((/* implicit */long long int) var_4)), (9223372036854775803LL))))))));
                }
            } 
        } 
    } 
}
