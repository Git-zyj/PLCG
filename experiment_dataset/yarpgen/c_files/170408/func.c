/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170408
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
    var_19 = ((/* implicit */unsigned int) max((min((((((/* implicit */_Bool) var_4)) ? (var_17) : (((/* implicit */int) var_2)))), (((/* implicit */int) ((var_7) && ((_Bool)1)))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_12)) % (((/* implicit */int) var_1))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_1)))) : (((/* implicit */int) var_0))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_5)))) ? (9922501233117538537ULL) : (((/* implicit */unsigned long long int) min((max((var_13), (((/* implicit */unsigned int) (unsigned char)255)))), (((/* implicit */unsigned int) (_Bool)1)))))));
        var_21 += ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) var_2))))), ((-(((/* implicit */int) (unsigned short)24576)))))))));
        var_22 = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned short)2)) % (((/* implicit */int) (_Bool)1)))) >= ((-((~(((/* implicit */int) var_5))))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            var_23 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) 1007880852)) && (var_7))));
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    for (long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                    {
                        {
                            var_24 = ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * ((((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_15))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) 2147483647)) <= (5271037669801125034LL))))) : ((-(var_13))));
                            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))))) - (((((/* implicit */int) var_8)) + ((~(((/* implicit */int) var_8)))))))))));
                        }
                    } 
                } 
            } 
            arr_14 [i_0] [i_0] = ((/* implicit */long long int) var_10);
            var_26 = ((/* implicit */unsigned char) (~(((((/* implicit */long long int) ((/* implicit */int) var_10))) / (arr_13 [i_0] [i_0] [i_0] [i_1] [(unsigned char)9])))));
        }
        for (int i_5 = 0; i_5 < 17; i_5 += 4) 
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 17; i_6 += 3) 
            {
                for (int i_7 = 0; i_7 < 17; i_7 += 4) 
                {
                    {
                        var_27 = ((/* implicit */unsigned int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)17))) & (8524242840592013082ULL)))));
                        var_28 = ((/* implicit */int) (((-2147483647 - 1)) <= (((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 2 */
                        for (signed char i_8 = 2; i_8 < 14; i_8 += 3) /* same iter space */
                        {
                            var_29 = ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_8] [i_5]))) > (-5055092568812293875LL)))), (((((/* implicit */_Bool) max(((-2147483647 - 1)), (((/* implicit */int) var_4))))) ? ((-(((/* implicit */int) var_0)))) : (((/* implicit */int) var_5))))));
                            arr_26 [i_0] [i_5] [5U] [5U] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) * (1257065149U)))) || (((/* implicit */_Bool) max((15394767677793438514ULL), (((/* implicit */unsigned long long int) (signed char)127)))))));
                        }
                        for (signed char i_9 = 2; i_9 < 14; i_9 += 3) /* same iter space */
                        {
                            arr_30 [(signed char)14] [i_0] = ((/* implicit */unsigned short) var_6);
                            var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) max((2193576929539823368LL), (((/* implicit */long long int) (unsigned short)45503)))))));
                            arr_31 [i_5] [i_5] [i_6] &= ((/* implicit */int) min((9922501233117538533ULL), (((/* implicit */unsigned long long int) -2193576929539823369LL))));
                        }
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)36427)) + (((/* implicit */int) (signed char)63))));
                        var_32 += ((/* implicit */unsigned int) (unsigned char)58);
                    }
                } 
            } 
            var_33 = ((/* implicit */long long int) 2438236872U);
            var_34 = ((/* implicit */unsigned int) (~(min((2193576929539823374LL), (6138625958413183045LL)))));
        }
    }
    var_35 = ((/* implicit */short) ((((((/* implicit */int) var_5)) % ((-(((/* implicit */int) (_Bool)1)))))) + (max((((/* implicit */int) var_11)), (((((/* implicit */int) var_5)) + (((/* implicit */int) var_12))))))));
    var_36 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (2193576929539823368LL)));
}
