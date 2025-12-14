/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128126
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
    var_20 *= ((/* implicit */short) var_11);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 7; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((long long int) ((((/* implicit */int) (unsigned char)143)) << (((((/* implicit */int) arr_2 [(short)4])) - (108)))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_2 = 2; i_2 < 9; i_2 += 1) 
                {
                    arr_8 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) (short)-28720)) - (((/* implicit */int) var_17))))) - (((((/* implicit */_Bool) (unsigned char)103)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_12)))));
                    var_22 = ((((/* implicit */int) ((3915401482U) > (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) & ((~(((/* implicit */int) var_3)))));
                    var_23 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-28720)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_18)))) << (((arr_6 [i_0 + 1] [i_0 - 1] [(short)1]) + (2501794220741709083LL)))));
                }
                /* vectorizable */
                for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    arr_12 [0U] [i_0] = ((/* implicit */_Bool) ((unsigned char) (short)-28720));
                    arr_13 [i_0] = ((/* implicit */short) (unsigned short)51229);
                }
                var_24 = ((/* implicit */signed char) var_7);
                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)28726)) ? (((/* implicit */int) (short)28723)) : (((/* implicit */int) (signed char)22)))), ((~(((/* implicit */int) (signed char)-78))))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)14306)) ? (((/* implicit */int) (short)-28714)) : (1111590709))))) : (((((((/* implicit */int) min(((short)20357), (arr_7 [i_0] [i_0] [i_1])))) + (2147483647))) >> (((((arr_6 [i_1] [i_1] [i_0]) | (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0 + 2]))))) + (2501794220741709081LL)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_4 = 1; i_4 < 14; i_4 += 4) 
    {
        arr_17 [i_4] = ((/* implicit */long long int) ((((((/* implicit */int) (short)-14783)) + (((/* implicit */int) ((2559949408961350375ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [5])))))))) & (((int) arr_16 [i_4 + 1]))));
        var_26 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_17))))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2954251689U)))))))), (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)20373))) * (0U))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [(unsigned short)5]))))))));
        var_27 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)21))))), (arr_14 [i_4 - 1])));
        arr_18 [(signed char)7] = ((/* implicit */unsigned short) max(((-(-7943487669744955419LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) 3101444575501267133ULL))) ? (arr_14 [i_4 + 1]) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-16384))))))))));
    }
}
