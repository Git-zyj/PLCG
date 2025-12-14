/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161398
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
    var_16 = var_4;
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)113))))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_1] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            arr_12 [(unsigned short)11] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) (_Bool)1))) - (((/* implicit */int) ((signed char) arr_9 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3])))));
                            var_18 ^= ((/* implicit */unsigned int) arr_2 [(short)2]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    for (signed char i_5 = 3; i_5 < 22; i_5 += 4) 
                    {
                        {
                            arr_20 [i_0] [i_1] [i_4] [i_5] [i_0] [i_0] = ((/* implicit */short) (~(min((2729339025063262981LL), (((/* implicit */long long int) (_Bool)1))))));
                            /* LoopSeq 3 */
                            for (signed char i_6 = 0; i_6 < 23; i_6 += 4) 
                            {
                                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) max(((+(((/* implicit */int) max((var_10), ((unsigned short)12826)))))), ((-(((/* implicit */int) var_7)))))))));
                                arr_24 [i_0] [i_1] [i_4] [i_4] [i_0] [i_6] [i_6] = ((/* implicit */unsigned char) var_15);
                                var_20 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)229))))) ? (((((/* implicit */_Bool) 3527892871121628370ULL)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_4] [i_6]))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56858))))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)8668)))))));
                            }
                            for (unsigned short i_7 = 2; i_7 < 22; i_7 += 3) /* same iter space */
                            {
                                var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)49132)) && (((/* implicit */_Bool) arr_3 [i_1] [i_0]))))) >> (((((/* implicit */int) max(((unsigned char)229), (arr_6 [i_0] [i_1] [i_1] [i_0])))) - (217)))))), (min((var_4), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-122)))))))));
                                arr_29 [i_0] = ((/* implicit */unsigned short) ((var_4) % (((/* implicit */long long int) min(((~(((/* implicit */int) arr_15 [i_0] [i_0] [i_0])))), (((/* implicit */int) var_10)))))));
                            }
                            for (unsigned short i_8 = 2; i_8 < 22; i_8 += 3) /* same iter space */
                            {
                                arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_4] [i_4]))))) >> ((((~(((/* implicit */int) (unsigned short)42950)))) + (42954)))))) & (max((((/* implicit */unsigned long long int) ((unsigned int) var_12))), (arr_11 [i_0] [i_0] [i_0] [i_0])))));
                                var_22 = ((/* implicit */_Bool) arr_30 [i_0] [(unsigned short)17] [(_Bool)1] [(_Bool)1] [i_0] [(_Bool)1] [17LL]);
                                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_1])))) << (((((((/* implicit */int) ((unsigned short) arr_3 [(unsigned short)16] [i_1]))) * (((/* implicit */int) var_7)))) - (915058496))))))));
                            }
                            var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_11)))))));
                        }
                    } 
                } 
                arr_33 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) max((min((3527892871121628370ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) var_6))));
                arr_34 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_28 [i_0] [i_1] [i_1] [i_1]))));
            }
        } 
    } 
}
