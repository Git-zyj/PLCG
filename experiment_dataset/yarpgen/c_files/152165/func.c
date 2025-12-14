/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152165
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
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)7212)) ? (((/* implicit */int) ((unsigned short) var_7))) : (((/* implicit */int) var_4))))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (-5877288680826386419LL) : (((/* implicit */long long int) (~(var_16)))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 4; i_2 < 10; i_2 += 2) 
                {
                    for (int i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) ((max((arr_5 [i_3 - 1] [i_1] [i_0]), (((/* implicit */unsigned int) arr_7 [i_3 - 1] [i_3 - 1] [i_2 - 3])))) <= (min((arr_5 [i_3 + 2] [i_3 + 2] [i_0]), (((/* implicit */unsigned int) arr_7 [i_3 + 4] [(signed char)0] [i_2 - 1]))))));
                            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [6U] [i_2 - 4] [i_2 + 1] [6U] [i_2 - 1] [i_3 - 1])) ? (((/* implicit */long long int) var_13)) : (1484554778565655772LL)))) ? (((/* implicit */unsigned long long int) ((arr_6 [i_2] [i_0] [i_2 - 3] [i_2 - 3]) | (((/* implicit */int) arr_8 [(unsigned short)7] [i_2 - 4] [i_2 - 3] [i_2 - 1] [i_2 - 2] [i_3 + 1]))))) : (((unsigned long long int) arr_8 [i_0] [i_2 + 1] [i_2 + 2] [i_2] [i_2 - 4] [i_3 + 3]))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32658)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : ((+(arr_5 [i_0] [i_0] [i_0])))));
                /* LoopNest 3 */
                for (long long int i_4 = 2; i_4 < 11; i_4 += 3) 
                {
                    for (int i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        for (long long int i_6 = 3; i_6 < 10; i_6 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (unsigned short)12466)) : (((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) max((((/* implicit */unsigned short) (short)32418)), (arr_3 [i_0]))))));
                                var_23 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)1)) << (((arr_9 [i_4 - 2] [i_6 - 2] [i_6 - 3]) + (4417019764108464538LL))))) + (((((/* implicit */_Bool) 16310123286649115408ULL)) ? (((/* implicit */int) (unsigned short)53069)) : (((/* implicit */int) (short)-7192))))));
                                arr_15 [10] [10LL] [i_4 + 2] [i_0] [10LL] [i_6] = ((/* implicit */unsigned short) ((min((arr_14 [i_6 - 2] [i_4 + 2] [i_0] [i_4 + 2] [(short)4]), (arr_14 [i_6 - 2] [i_4 - 2] [i_0] [(short)5] [(short)1]))) == (((/* implicit */unsigned int) -1127247983))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_7 = 0; i_7 < 23; i_7 += 2) 
    {
        for (unsigned int i_8 = 0; i_8 < 23; i_8 += 1) 
        {
            {
                var_24 -= ((/* implicit */short) max((max((var_1), (((/* implicit */unsigned short) arr_17 [4])))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [(unsigned short)10])) ? (var_7) : (((/* implicit */long long int) var_6))))) && (((((/* implicit */int) var_15)) != (((/* implicit */int) (_Bool)1)))))))));
                arr_23 [13U] [i_7] [i_7] = ((/* implicit */_Bool) ((long long int) arr_21 [(unsigned short)1] [i_7]));
                var_25 = ((/* implicit */unsigned int) (-(var_5)));
            }
        } 
    } 
}
