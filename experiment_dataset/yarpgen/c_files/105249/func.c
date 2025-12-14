/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105249
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 3; i_0 < 7; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] [i_0 + 2] = ((/* implicit */int) (-(min((arr_1 [i_0 - 3] [i_0]), (((/* implicit */long long int) var_10))))));
        arr_3 [i_0 - 1] = ((/* implicit */long long int) max((((/* implicit */int) var_5)), (((((/* implicit */int) var_9)) ^ (((((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0 - 2])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)0))))))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 7; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 3; i_2 < 9; i_2 += 1) 
        {
            var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) min((arr_0 [i_2 - 1]), ((unsigned char)22))))));
            var_12 = ((/* implicit */int) var_4);
            var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) (~(((((((/* implicit */int) var_8)) ^ (3))) ^ (133466683))))))));
            arr_11 [i_2] [i_1 + 1] |= ((/* implicit */long long int) (~(((((/* implicit */int) (signed char)126)) | (((/* implicit */int) (unsigned char)203))))));
            arr_12 [i_1 + 2] = ((/* implicit */signed char) ((((/* implicit */int) (short)29882)) ^ (max(((~(((/* implicit */int) var_0)))), (((/* implicit */int) var_6))))));
        }
        var_14 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)254)))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (var_1)))) ? (((/* implicit */int) arr_9 [i_1 - 1])) : (((/* implicit */int) var_10))))));
    }
    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
    {
        arr_15 [i_3] = ((/* implicit */short) ((signed char) ((((8049048528002455588LL) - (((/* implicit */long long int) ((/* implicit */int) var_10))))) ^ (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)238))))))));
        /* LoopNest 2 */
        for (short i_4 = 1; i_4 < 23; i_4 += 4) 
        {
            for (signed char i_5 = 0; i_5 < 25; i_5 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 2; i_6 < 23; i_6 += 1) 
                    {
                        for (short i_7 = 1; i_7 < 21; i_7 += 4) 
                        {
                            {
                                arr_31 [i_6 - 1] [i_6 - 1] [i_5] [i_6 + 1] [10ULL] = ((/* implicit */unsigned char) var_1);
                                var_15 = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)8)))) & (((((/* implicit */_Bool) (unsigned short)10)) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) (signed char)120)))))), (((((/* implicit */int) (unsigned char)238)) * (((/* implicit */int) (signed char)-8))))));
                            }
                        } 
                    } 
                    var_16 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 8LL)) <= (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)26))))), (var_3)))));
                    arr_32 [i_3] [i_4 + 1] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) < (((((14521023201453889689ULL) | (var_7))) >> (((((/* implicit */int) var_6)) - (59693)))))));
                }
            } 
        } 
    }
    var_17 = ((/* implicit */long long int) var_8);
}
