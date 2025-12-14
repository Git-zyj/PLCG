/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146531
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
    var_17 = ((/* implicit */_Bool) var_8);
    var_18 = ((/* implicit */unsigned char) var_16);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned short) (_Bool)1);
                arr_5 [i_1] [i_0] = ((((arr_2 [i_1]) <= (arr_2 [i_1]))) ? (min((arr_2 [i_0]), (((/* implicit */unsigned long long int) 2174276982U)))) : ((+(arr_2 [i_0]))));
                arr_6 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(arr_0 [i_0] [i_1])))) | (max((min((((/* implicit */unsigned long long int) 2174276982U)), (arr_2 [i_1]))), (((/* implicit */unsigned long long int) var_1))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    /* LoopNest 2 */
                    for (long long int i_5 = 3; i_5 < 21; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_21 [(unsigned short)5] [i_3] [17LL] [i_4] = (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) -7423523348092006606LL)))))))));
                                arr_22 [i_2] [i_4] [i_4] [i_6] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) ((_Bool) (unsigned short)7227))), (var_11))))) ^ (((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57228))) : (((unsigned long long int) arr_20 [i_4] [i_3] [i_4] [i_3]))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */short) ((arr_14 [i_2] [i_2]) ? (((((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_3] [i_4]))) - (arr_10 [i_4] [i_3] [i_2]))) - (max((3788198722U), (((/* implicit */unsigned int) (unsigned char)0)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58325))) <= (1710057202U)))))));
                    var_21 = ((/* implicit */int) arr_13 [i_2] [i_3] [i_4]);
                }
                for (unsigned int i_7 = 0; i_7 < 25; i_7 += 3) 
                {
                    var_22 = ((/* implicit */long long int) ((unsigned int) var_6));
                    var_23 = ((unsigned long long int) var_10);
                    var_24 = ((/* implicit */unsigned short) arr_19 [6] [6]);
                    var_25 = ((/* implicit */_Bool) max((((/* implicit */int) ((unsigned short) (+(1669368844189236546LL))))), ((+(((/* implicit */int) ((_Bool) (unsigned char)173)))))));
                }
                for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 4) 
                {
                    var_26 = ((/* implicit */unsigned int) var_0);
                    var_27 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) var_16)) < (((/* implicit */int) arr_17 [i_2] [i_8] [i_3] [i_8])))))));
                }
                arr_30 [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) -1669368844189236563LL)) ? (max((((((/* implicit */int) var_5)) * (((/* implicit */int) arr_20 [(unsigned short)24] [i_3] [10ULL] [i_3])))), ((-(((/* implicit */int) var_14)))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_15 [(_Bool)1])))) ? (((/* implicit */int) ((signed char) var_0))) : (((/* implicit */int) (_Bool)1))))));
                var_28 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_1)) & (((/* implicit */int) var_16))))) ? ((-(arr_11 [i_2] [i_2] [i_3]))) : (arr_15 [10ULL]))) & (((((/* implicit */_Bool) arr_29 [i_2] [i_2] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) (~(4034224722U)))) : (((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_2]))) : (13409268770662467802ULL)))))));
                arr_31 [i_2] [i_3] [i_3] = ((/* implicit */signed char) arr_16 [i_2] [i_3] [(unsigned short)14]);
            }
        } 
    } 
}
