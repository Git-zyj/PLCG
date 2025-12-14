/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152815
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            {
                var_12 = ((((/* implicit */_Bool) -930881721218245402LL)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)58682)) >> (((-930881721218245417LL) + (930881721218245434LL)))))) == ((+(-930881721218245428LL))))))));
                var_13 &= ((/* implicit */signed char) min(((-((~(4294967295U))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_1])))))));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 1; i_2 < 20; i_2 += 1) 
                {
                    var_14 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (+(-930881721218245393LL)))) ? ((-(((/* implicit */int) arr_1 [i_2 - 1])))) : (((/* implicit */int) arr_2 [i_0] [i_1] [i_1 - 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_5 [i_0] [i_1 - 1] [i_2 - 1] [i_0]), (((/* implicit */unsigned short) arr_0 [i_2 - 1] [i_1]))))))))));
                    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) max((((/* implicit */int) arr_1 [i_1 - 1])), (((((/* implicit */_Bool) (unsigned char)181)) ? (((/* implicit */int) arr_1 [i_1 + 1])) : (((/* implicit */int) arr_1 [i_1 - 1])))))))));
                    arr_8 [i_0] = ((/* implicit */unsigned int) ((long long int) ((var_0) < (18446744073709551615ULL))));
                }
                for (short i_3 = 1; i_3 < 19; i_3 += 4) 
                {
                    var_16 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */signed char) ((-930881721218245418LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))), (arr_2 [i_1] [i_1 - 2] [i_3])))) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) ((unsigned char) -930881721218245404LL)))));
                    arr_11 [i_3] [i_1 - 1] [i_0] [i_0] = ((/* implicit */_Bool) (-(4294967295U)));
                    var_17 -= ((/* implicit */unsigned long long int) ((-930881721218245402LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))));
                }
                for (signed char i_4 = 0; i_4 < 23; i_4 += 2) 
                {
                    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((short) 930881721218245417LL)))));
                    var_19 = ((/* implicit */signed char) (-(((/* implicit */int) ((18446744073709551609ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16376))))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (short i_6 = 3; i_6 < 22; i_6 += 4) 
                        {
                            {
                                arr_21 [i_6 - 2] [i_5 - 1] [i_4] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)18846)) ? (-930881721218245418LL) : (((/* implicit */long long int) ((/* implicit */int) (short)27841))))));
                                var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)102))) : (4294967295U))) >> ((((-(((/* implicit */int) (unsigned short)35152)))) + (35163))))))));
                                var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((_Bool) (~(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])))))), (((arr_13 [(unsigned short)15] [(unsigned short)15] [i_4] [i_6 - 1]) & (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_5] [i_4] [i_1])))))))));
                            }
                        } 
                    } 
                    var_22 -= ((/* implicit */short) ((long long int) -930881721218245417LL));
                }
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) (unsigned short)17))))) >> (((930881721218245416LL) - (930881721218245401LL)))))));
    var_24 = ((/* implicit */unsigned char) 4432488634415012445ULL);
}
