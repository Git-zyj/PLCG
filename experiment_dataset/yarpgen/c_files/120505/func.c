/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120505
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            for (int i_2 = 3; i_2 < 16; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */long long int) max((var_15), (min((((/* implicit */long long int) (short)9079)), (var_7)))));
                    var_16 = ((/* implicit */unsigned int) arr_1 [(_Bool)1] [i_1]);
                    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) var_9))));
                    var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (signed char)-85)), ((unsigned short)65535)))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_1 + 2] [i_1 + 2])), (4294967289U)))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) && (((/* implicit */_Bool) (short)0))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        for (signed char i_4 = 1; i_4 < 19; i_4 += 2) 
        {
            {
                var_19 = min((max((((/* implicit */unsigned long long int) arr_7 [i_3] [i_4 - 1])), (max((((/* implicit */unsigned long long int) var_13)), (var_8))))), (max((max((arr_11 [i_3]), (((/* implicit */unsigned long long int) 7U)))), (((/* implicit */unsigned long long int) arr_7 [i_3] [i_4 + 1])))));
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    for (unsigned char i_6 = 2; i_6 < 18; i_6 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)1309)) && (((/* implicit */_Bool) 9223372036854775807LL))));
                            var_21 = ((((int) arr_14 [i_3] [i_4 - 1])) + (((/* implicit */int) ((959829849U) >= (((/* implicit */unsigned int) 772025858))))));
                            var_22 = ((/* implicit */unsigned int) ((arr_6 [i_5]) ? (((/* implicit */int) (((-(((/* implicit */int) arr_7 [i_6] [i_4])))) != (((/* implicit */int) arr_10 [i_4 + 1] [i_4 - 1] [i_6 + 2]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_8 [i_3] [i_4 + 1]), (((/* implicit */unsigned int) arr_7 [i_3] [i_3]))))))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) max((((/* implicit */int) max((arr_12 [i_3] [i_3] [i_3] [i_4 + 1]), (arr_12 [i_4 + 1] [i_4 + 1] [i_4] [i_3])))), ((-(((/* implicit */int) arr_12 [i_4 + 1] [i_4] [i_4 - 1] [i_3])))))))));
                /* LoopNest 2 */
                for (long long int i_7 = 1; i_7 < 16; i_7 += 3) 
                {
                    for (unsigned char i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_9 [i_4 + 1] [i_4 + 1] [i_7 - 1]), (((/* implicit */short) var_13))))) ? (max((((11195142910817859877ULL) - (11195142910817859869ULL))), (((/* implicit */unsigned long long int) arr_19 [i_7] [i_4 + 1] [i_7 + 2] [(unsigned char)1])))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_14 [i_4 + 1] [i_4 - 1])))));
                            var_25 = ((/* implicit */unsigned char) (((~(max((var_12), (((/* implicit */unsigned long long int) var_0)))))) / (arr_20 [10U] [5])));
                            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(arr_15 [i_3] [i_4] [(unsigned char)5])))) | (20U)))) ? (((/* implicit */int) arr_9 [i_3] [i_3] [i_3])) : (((/* implicit */int) (((~(((/* implicit */int) arr_7 [i_7 + 3] [i_3])))) <= (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)126)) : (((/* implicit */int) (unsigned char)45)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_27 = var_11;
    var_28 = ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_4))), (((/* implicit */unsigned long long int) 1488217896)))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) | (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)102))) > (var_8)))))))));
    var_29 = ((/* implicit */int) (~((+(var_8)))));
}
