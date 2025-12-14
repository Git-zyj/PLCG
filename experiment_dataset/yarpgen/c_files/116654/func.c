/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116654
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
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(288230101273804800LL)))) ? (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) : (((((/* implicit */int) var_0)) + (var_4)))))) && (((/* implicit */_Bool) var_5))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 3; i_2 < 15; i_2 += 4) 
                {
                    for (short i_3 = 3; i_3 < 13; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 15; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) arr_7 [(unsigned short)4] [i_1] [i_0])))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0))))) | (max((3699005698250522478ULL), (((/* implicit */unsigned long long int) var_0))))))));
                                var_12 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)65511))))), ((+(0ULL)))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)30)) - (((/* implicit */int) (unsigned char)44))))) | ((-(6826871862090203977ULL))))) : (((((/* implicit */_Bool) 11371494171113302941ULL)) ? (((/* implicit */unsigned long long int) 1456578493)) : ((~(0ULL)))))));
                                arr_13 [i_3] [i_1] [i_3] = ((/* implicit */_Bool) max((((/* implicit */int) (signed char)118)), (1525078330)));
                                arr_14 [i_0] [i_3] [i_2] = ((/* implicit */short) (!(((((/* implicit */_Bool) -1107405485)) && ((_Bool)1)))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_1] [i_1] [i_0] = (((_Bool)1) ? (((((((/* implicit */int) (signed char)-1)) + (2147483647))) >> ((((((-2147483647 - 1)) - (-2147483643))) + (19))))) : (((/* implicit */int) (unsigned short)41178)));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) var_6);
    var_14 = ((/* implicit */short) (-(((/* implicit */int) (short)7387))));
}
