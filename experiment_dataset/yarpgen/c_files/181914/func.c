/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181914
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
    for (short i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned char) max((((/* implicit */short) arr_3 [i_1] [i_0 - 1] [6])), (var_7)))))));
                var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) var_7))));
                arr_5 [i_0] [i_1] = ((((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_2 [i_0] [i_0])), (var_9)))) || (((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_0]))) : (var_0));
            }
        } 
    } 
    var_12 = ((/* implicit */short) ((((((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), (-3054140860894850205LL)))) ? (3054140860894850199LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) << (((max((max((-3054140860894850218LL), (-3054140860894850205LL))), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_6)), (var_2)))))) - (4294967265LL)))));
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned short i_5 = 2; i_5 < 19; i_5 += 4) 
                    {
                        for (long long int i_6 = 1; i_6 < 16; i_6 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (!(max(((!(((/* implicit */_Bool) (signed char)-10)))), ((!(((/* implicit */_Bool) 9223372036854775807LL)))))))))));
                                arr_17 [i_3] [i_3] [i_3] [i_3] [i_2] = ((/* implicit */long long int) min(((signed char)-32), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)45))) != (((((/* implicit */_Bool) -662442579)) ? (-3054140860894850203LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-33))))))))));
                                arr_18 [i_3] [i_2] [i_6] [i_5] [i_6 + 1] = ((/* implicit */short) min(((~(((unsigned long long int) -1606525488)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_4] [i_5 - 2] [i_6 + 2] [i_6] [i_6 + 2])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_2] [i_6])) ? (1606525487) : (1606525484)))) : (((arr_16 [i_4] [i_3] [i_3] [i_2] [i_6] [i_4]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_3] [i_3] [i_3] [i_6] [i_6]))))))))));
                            }
                        } 
                    } 
                } 
                var_14 += ((/* implicit */unsigned long long int) ((long long int) min((((((/* implicit */_Bool) -169753534382813579LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-85)))), (((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (signed char)14)))))));
                /* LoopNest 3 */
                for (unsigned short i_7 = 0; i_7 < 20; i_7 += 3) 
                {
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        for (long long int i_9 = 4; i_9 < 17; i_9 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2] [4LL] [i_7] [i_3]))) + ((+(arr_24 [i_8] [i_8] [i_3] [i_9 + 1] [(signed char)0] [i_9] [i_9]))))))));
                                var_16 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((unsigned char) var_0))) ? (max((((/* implicit */unsigned long long int) arr_20 [i_2] [i_2] [i_2])), (16744327628323441004ULL))) : (((/* implicit */unsigned long long int) arr_16 [i_9] [i_9 - 4] [i_9 - 4] [i_2] [i_9] [i_9 + 2]))))));
                                var_17 = ((/* implicit */unsigned int) ((_Bool) var_2));
                                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((unsigned int) (unsigned short)0)) >= (((/* implicit */unsigned int) max((1606525482), (((/* implicit */int) arr_6 [i_3]))))))))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */signed char) ((short) (unsigned char)81));
                var_20 = ((/* implicit */long long int) max((var_20), (max((((long long int) (+(((/* implicit */int) (unsigned char)74))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [14LL] [i_2] [i_2] [i_2] [i_3]))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-6))) / (var_9))))))))));
            }
        } 
    } 
}
