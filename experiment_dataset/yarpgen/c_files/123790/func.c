/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123790
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
    var_14 *= ((/* implicit */unsigned short) var_13);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 20; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((_Bool) min((((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned int) 1090252605)) : (var_13))), (((/* implicit */unsigned int) ((int) arr_2 [10LL] [13ULL] [i_0])))))))));
                var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) arr_0 [i_1]))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 20; i_2 += 3) 
                {
                    for (short i_3 = 2; i_3 < 18; i_3 += 3) 
                    {
                        {
                            var_17 ^= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_6 [i_2])), (min((((((/* implicit */unsigned int) -240711492)) * (3726719898U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (515581201) : (((/* implicit */int) var_3)))))))));
                            /* LoopSeq 2 */
                            for (short i_4 = 1; i_4 < 20; i_4 += 2) /* same iter space */
                            {
                                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (((+(var_12))) != (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned short)31340)))))))));
                                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) 731183756495764416ULL)) || (((/* implicit */_Bool) 1414889696989016571ULL)))))))));
                                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) 4294967295U)) * (11058404136695008305ULL)))))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))))));
                            }
                            /* vectorizable */
                            for (short i_5 = 1; i_5 < 20; i_5 += 2) /* same iter space */
                            {
                                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_12)))))));
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) 2338806646U))));
                                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (+((((_Bool)0) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)31659)))))))));
                            }
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 20; i_6 += 4) 
                {
                    for (unsigned long long int i_7 = 3; i_7 < 18; i_7 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned short i_8 = 2; i_8 < 17; i_8 += 3) 
                            {
                                var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (~(((var_3) ? (var_13) : (284659860U))))))));
                                var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (+(((/* implicit */int) var_3)))))));
                                var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) var_7))));
                            }
                            arr_20 [i_6] [(unsigned short)6] &= ((/* implicit */signed char) ((min((min((((/* implicit */long long int) -8388608)), (2921286819839922999LL))), (((/* implicit */long long int) (+(((/* implicit */int) var_0))))))) / (((/* implicit */long long int) ((/* implicit */int) (short)-28687)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
