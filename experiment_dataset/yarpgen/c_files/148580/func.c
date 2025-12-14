/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148580
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned short) ((unsigned long long int) ((_Bool) -333241469)));
        var_15 = ((/* implicit */short) ((_Bool) var_12));
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (-7168815715069461362LL) : (var_0)))) && (((/* implicit */_Bool) arr_1 [i_0] [i_0])))))));
        arr_3 [i_0] [i_0] |= ((/* implicit */unsigned long long int) ((((-3323281496294069906LL) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned char)231)) - (231)))));
        var_17 = ((/* implicit */unsigned long long int) ((5572813941045927176LL) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) <= (arr_0 [i_0])))))));
    }
    for (unsigned char i_1 = 1; i_1 < 9; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)117)) ^ (((/* implicit */int) (signed char)117)))) ^ (((/* implicit */int) ((short) arr_5 [i_1 + 1])))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((_Bool) (signed char)117)))));
            var_19 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) + (((((/* implicit */int) var_4)) - (((/* implicit */int) arr_11 [i_1] [i_1]))))));
            arr_12 [6ULL] [i_1] [i_1] = (~((+(var_3))));
        }
    }
    var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_12)) ? (((int) var_4)) : (((((/* implicit */int) (signed char)-117)) & (((/* implicit */int) (signed char)-119)))))) << (((((((((/* implicit */_Bool) var_6)) ? (var_3) : (var_12))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)32632)) << (((((/* implicit */int) (signed char)117)) - (114)))))))) - (14273656342253459384ULL)))));
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) 
    {
        for (int i_4 = 0; i_4 < 14; i_4 += 3) 
        {
            {
                var_21 = ((283515721U) < (3860874466U));
                var_22 = ((/* implicit */signed char) 1740967287U);
                var_23 = ((/* implicit */unsigned char) ((var_3) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)85)))));
            }
        } 
    } 
}
