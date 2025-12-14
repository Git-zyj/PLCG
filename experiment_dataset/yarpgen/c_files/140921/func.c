/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140921
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
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) arr_6 [i_4]))));
                                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32767)) ? (((/* implicit */long long int) ((/* implicit */int) max(((short)-32743), ((short)-32767))))) : (((((/* implicit */_Bool) 66571993088LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_0] [i_0])))))) ? (max((((/* implicit */unsigned long long int) -4713952922061161392LL)), (((((/* implicit */_Bool) -66571993091LL)) ? (17310969912344029806ULL) : (((/* implicit */unsigned long long int) arr_5 [i_0])))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0])) ? (68711088128LL) : (66571993088LL))), (((6773449516849891504LL) ^ (-6773449516849891504LL))))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] = ((/* implicit */_Bool) 3579516870448655565ULL);
                    var_19 = ((/* implicit */signed char) max((-2725994745715939115LL), (((/* implicit */long long int) 1572590290U))));
                }
            } 
        } 
    } 
    var_20 |= ((/* implicit */long long int) var_0);
    var_21 |= ((/* implicit */long long int) ((((((/* implicit */_Bool) 1135774161365521807ULL)) && (((/* implicit */_Bool) (short)-18071)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_14))));
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_1) + (((/* implicit */unsigned int) ((/* implicit */int) min((var_6), (var_12)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 14867227203260896048ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_3) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) : (var_1)))) : (((((/* implicit */_Bool) min((-5591195328383471911LL), (var_4)))) ? (-68711088129LL) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_9)), ((unsigned short)15907)))))))));
}
