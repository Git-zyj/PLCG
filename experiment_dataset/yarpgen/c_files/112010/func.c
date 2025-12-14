/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112010
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
    var_11 = ((/* implicit */int) var_7);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) /* same iter space */
    {
        var_12 += ((/* implicit */int) (short)32748);
        var_13 &= ((/* implicit */unsigned int) (unsigned char)245);
    }
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */signed char) min((((((/* implicit */_Bool) 2836454461U)) ? ((-(1527593800U))) : (((((/* implicit */_Bool) 3452294871U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)66))) : (3452294871U))))), (min((arr_5 [i_1]), (((/* implicit */unsigned int) arr_0 [i_1]))))));
        var_15 = ((/* implicit */unsigned short) (~(4179214853U)));
        var_16 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)0))));
        var_17 = min(((-(3423783807251017082LL))), ((((~(3423783807251017055LL))) & (((/* implicit */long long int) ((/* implicit */int) var_1))))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) var_2);
                            var_19 = ((/* implicit */unsigned int) (((+(arr_7 [i_2] [i_2]))) - (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_13 [i_4] [i_2] [i_3] [i_4]))))) : (3423783807251017082LL)))));
                        }
                    } 
                } 
            } 
            var_20 = ((/* implicit */unsigned short) max(((+(var_5))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)17)) & (0)))))))));
            /* LoopSeq 1 */
            for (unsigned char i_6 = 2; i_6 < 19; i_6 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 2; i_7 < 19; i_7 += 2) 
                {
                    for (unsigned char i_8 = 1; i_8 < 19; i_8 += 4) 
                    {
                        {
                            var_21 &= ((/* implicit */unsigned char) ((((/* implicit */int) arr_24 [i_7] [4U] [i_7 - 1] [i_7 + 1] [i_7 - 2])) <= (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */int) (unsigned short)65514)) * (((/* implicit */int) arr_27 [10] [i_2] [i_6] [i_7])))) : (((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */int) (unsigned short)37788)) : (((/* implicit */int) (unsigned short)2326))))))));
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_1] [i_2] [i_6] [i_8]))) : (arr_22 [i_1] [i_2] [i_2]))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_24 [i_8] [i_7] [i_6 - 2] [i_1] [i_1])) != (((/* implicit */int) var_6))))))))) : (((((/* implicit */_Bool) min(((unsigned short)62358), ((unsigned short)65526)))) ? (((/* implicit */int) arr_27 [i_1] [i_2] [i_6] [i_7])) : (((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_9 = 0; i_9 < 20; i_9 += 3) 
                {
                    var_23 = ((/* implicit */unsigned short) var_5);
                    var_24 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((long long int) var_2))) ? (((-1LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_6] [i_6 - 1] [i_6 - 2] [i_6 - 2])))))));
                    var_25 = ((/* implicit */unsigned char) 1043597810U);
                    var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (+(3300508990U))))));
                }
            }
        }
    }
    var_27 ^= ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */_Bool) 3534941845275979559ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8)))) <= (((/* implicit */int) (unsigned short)65533))))) % ((~(min((177462181), (((/* implicit */int) (short)-3434))))))));
}
