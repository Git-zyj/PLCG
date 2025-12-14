/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184002
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
    var_16 = ((/* implicit */_Bool) max((((/* implicit */long long int) max((((/* implicit */short) (signed char)127)), (var_14)))), (max((((/* implicit */long long int) var_12)), (min((var_15), (((/* implicit */long long int) 2147483647))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) arr_3 [i_0 + 4] [i_0 + 3]))))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_18 = (-(((/* implicit */int) (unsigned short)65535)));
                                var_19 += ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (max((min((708697999080947245ULL), (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) arr_13 [i_0 + 3] [i_1] [i_0 + 3] [i_2 - 1] [i_4]))))));
                                var_20 = ((15390216060874080673ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)235))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_5 = 2; i_5 < 10; i_5 += 3) 
                {
                    for (unsigned int i_6 = 1; i_6 < 12; i_6 += 2) 
                    {
                        {
                            arr_22 [i_5] [i_5] = ((/* implicit */unsigned int) (+(min((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned short)34630)) : (((/* implicit */int) (unsigned short)7434)))), (-1841837846)))));
                            var_21 = ((/* implicit */short) ((unsigned short) var_4));
                            /* LoopSeq 1 */
                            for (short i_7 = 0; i_7 < 13; i_7 += 1) 
                            {
                                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) 742708940U)) ? (((/* implicit */int) (unsigned short)34630)) : (((/* implicit */int) (unsigned char)249))))))));
                                arr_25 [i_5] = ((/* implicit */signed char) min((((/* implicit */int) (_Bool)1)), (2147483647)));
                                var_23 = ((/* implicit */unsigned short) (-((+(((/* implicit */int) (_Bool)1))))));
                                var_24 = ((unsigned char) ((((/* implicit */int) var_9)) >= (var_4)));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = var_4;
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 14; i_8 += 2) 
    {
        for (unsigned long long int i_9 = 2; i_9 < 12; i_9 += 3) 
        {
            for (signed char i_10 = 1; i_10 < 10; i_10 += 2) 
            {
                {
                    arr_34 [i_8] [i_8] [i_9] [5LL] = ((/* implicit */short) ((unsigned short) max((((/* implicit */unsigned long long int) (_Bool)1)), ((~(18359348877681888664ULL))))));
                    arr_35 [i_8] [i_9] [i_9] = ((/* implicit */unsigned int) ((unsigned short) min((min((((/* implicit */unsigned int) (unsigned short)14845)), (arr_26 [(_Bool)1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_10))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 2; i_11 < 13; i_11 += 4) 
                    {
                        for (unsigned int i_12 = 1; i_12 < 13; i_12 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned char) 3513486664U);
                                var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)-122)), (4U)))), (min((((/* implicit */unsigned long long int) (signed char)-125)), (18446744073709551615ULL)))))) ? (var_7) : ((~(((/* implicit */int) (_Bool)1)))))))));
                            }
                        } 
                    } 
                    arr_41 [i_9] = ((/* implicit */short) max((((/* implicit */unsigned int) ((int) (_Bool)1))), (max((2238198501U), (((/* implicit */unsigned int) (short)1470))))));
                }
            } 
        } 
    } 
}
