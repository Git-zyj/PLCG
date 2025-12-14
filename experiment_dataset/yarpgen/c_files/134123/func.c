/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134123
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
    var_19 &= ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_6))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) (short)-32500);
                                var_21 ^= ((/* implicit */short) (+(((((/* implicit */_Bool) var_17)) ? (779211790) : (((/* implicit */int) (_Bool)1))))));
                                arr_13 [i_0] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) 5710897465758585652ULL)) ? (2065556652U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) var_8);
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)1023))))) ? (min(((-(((/* implicit */int) var_7)))), (((/* implicit */int) (unsigned char)104)))) : (((((/* implicit */_Bool) (short)-11951)) ? (((/* implicit */int) (unsigned short)30214)) : ((~(((/* implicit */int) var_16))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 16; i_5 += 3) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 4) 
        {
            {
                var_23 -= ((/* implicit */unsigned char) ((long long int) max((762906087887905108ULL), (((/* implicit */unsigned long long int) (short)-11951)))));
                var_24 = ((/* implicit */unsigned int) 7606513798795238975ULL);
                /* LoopNest 3 */
                for (unsigned int i_7 = 2; i_7 < 14; i_7 += 2) 
                {
                    for (unsigned long long int i_8 = 1; i_8 < 15; i_8 += 3) 
                    {
                        for (short i_9 = 3; i_9 < 15; i_9 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_17)) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 8613030291935708468ULL)))))))) ? (((unsigned long long int) (unsigned short)22636)) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (signed char)-38)) ? (((/* implicit */long long int) 1588511637)) : (1047916915904422833LL))), (((/* implicit */long long int) ((unsigned short) (unsigned char)33)))))))))));
                                arr_30 [2ULL] [i_5] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (short)-11942)) ? ((~(((/* implicit */int) var_1)))) : (((var_13) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_1)))))), ((+(((/* implicit */int) (unsigned short)40127))))));
                                arr_31 [i_5] [i_5] [1U] [(unsigned char)2] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_1), (var_16)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_6))))) : (((unsigned long long int) (short)-128))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-11951))) : (min((((/* implicit */unsigned int) var_9)), (1154966240U)))));
                                var_26 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)79)) ? (((/* implicit */unsigned long long int) max((var_15), (((/* implicit */long long int) (short)-11951))))) : (min((var_10), (((/* implicit */unsigned long long int) var_8))))));
                                arr_32 [(signed char)15] [i_6] [i_7] [i_8] [i_5] = ((/* implicit */unsigned long long int) (-(min((((/* implicit */long long int) ((((/* implicit */_Bool) 33554424U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_0)))), (min((((/* implicit */long long int) var_3)), (var_4)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_27 -= ((/* implicit */unsigned short) var_14);
}
