/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159705
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned short) var_5))), ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */unsigned long long int) 3141649062U)) : (8147763534658366961ULL)));
    var_19 = ((/* implicit */int) min((var_14), (((/* implicit */unsigned int) ((529007492U) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)32757))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 4; i_1 < 17; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [(signed char)9] [(short)0] [i_0] [i_0] [(_Bool)0] = ((/* implicit */int) 9223372036854775807LL);
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) 3765959796U);
                                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) 18446744073709551612ULL)) ? (-242100980) : (((/* implicit */int) (unsigned char)21))));
                            }
                        } 
                    } 
                    var_21 += ((/* implicit */short) -1LL);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 4) 
    {
        for (long long int i_6 = 3; i_6 < 9; i_6 += 3) 
        {
            {
                var_22 = ((/* implicit */unsigned short) min(((short)32757), (((/* implicit */short) (_Bool)1))));
                var_23 = ((/* implicit */_Bool) ((-9223372036854775795LL) ^ (((/* implicit */long long int) ((int) (_Bool)1)))));
                var_24 = ((/* implicit */signed char) ((max((min((((/* implicit */long long int) (unsigned short)24973)), (-9223372036854775795LL))), (((/* implicit */long long int) min(((unsigned char)203), (((/* implicit */unsigned char) (signed char)115))))))) >= (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58545))) * (min((((/* implicit */unsigned int) var_15)), (3765959790U))))))));
                var_25 = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) arr_3 [i_5] [10U] [i_6 + 2])), (2692365298870730853ULL))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775795LL)) ? (3765959796U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_6] [i_5] [i_6 + 1]))))))));
            }
        } 
    } 
}
