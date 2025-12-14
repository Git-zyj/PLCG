/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153525
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
    var_20 = ((/* implicit */short) var_18);
    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((max((((/* implicit */long long int) var_6)), (-3735365165138646444LL))) ^ (((long long int) var_16)))) / (((/* implicit */long long int) ((/* implicit */int) var_12))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) (+((+(((/* implicit */int) var_2))))))) : ((~(((687056750U) >> (((-1) + (10)))))))));
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_13), (((/* implicit */int) var_11))))) ? (min((((/* implicit */int) var_2)), ((+(arr_1 [i_0] [(_Bool)1]))))) : (((/* implicit */int) arr_0 [i_0])))))));
        var_23 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_1 [i_0] [0LL])), (((((/* implicit */unsigned int) arr_1 [i_0] [6U])) & (arr_2 [2LL] [2LL]))))))));
        var_24 = ((/* implicit */unsigned int) 5480610310087704261LL);
    }
    for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            var_25 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((unsigned short) arr_8 [i_1] [i_2] [i_1]))), (min((arr_8 [i_1] [i_1] [i_1]), (arr_8 [i_1] [i_2] [i_1])))));
            arr_9 [i_1] [i_1] = ((/* implicit */unsigned short) arr_1 [i_1] [i_1]);
        }
        for (int i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            /* LoopNest 2 */
            for (short i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                for (signed char i_5 = 1; i_5 < 13; i_5 += 2) 
                {
                    {
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -912040242)) ? (((/* implicit */int) (signed char)-126)) : (1626389365)));
                        var_27 = ((/* implicit */unsigned int) ((int) (~((-(var_13))))));
                        var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 7974014194576167347ULL))));
                    }
                } 
            } 
            var_29 = ((/* implicit */signed char) arr_16 [i_1] [i_1] [i_1] [i_1]);
            var_30 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((arr_11 [i_1]) != (((/* implicit */int) arr_7 [i_1] [i_1] [i_1]))))))))));
            /* LoopSeq 1 */
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                arr_23 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) var_6)), (((unsigned int) -1500353149))));
                var_31 = ((/* implicit */unsigned short) max((((/* implicit */long long int) arr_7 [i_1] [i_3] [i_6])), ((+(((((/* implicit */_Bool) arr_16 [i_1] [i_1] [12U] [i_6])) ? (arr_6 [i_1] [i_3]) : (var_19)))))));
            }
        }
        for (long long int i_7 = 0; i_7 < 15; i_7 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_8 = 0; i_8 < 15; i_8 += 4) 
            {
                var_32 = ((/* implicit */signed char) arr_6 [i_1] [i_7]);
                /* LoopSeq 1 */
                for (unsigned char i_9 = 0; i_9 < 15; i_9 += 1) 
                {
                    var_33 = ((/* implicit */unsigned long long int) ((unsigned int) (+(((var_11) ? (((/* implicit */int) (short)-31315)) : (arr_4 [i_1]))))));
                    var_34 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_19 [i_1] [i_1] [7LL] [i_1]))));
                    var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) min((arr_16 [i_1] [i_1] [i_7] [i_1]), (min((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) % (var_15))), (((/* implicit */unsigned int) var_16)))))))));
                }
            }
            /* LoopSeq 4 */
            for (unsigned int i_10 = 0; i_10 < 15; i_10 += 2) 
            {
                var_36 *= ((/* implicit */unsigned int) ((_Bool) ((short) ((((/* implicit */_Bool) var_19)) && (((/* implicit */_Bool) -1252031207517402730LL))))));
                var_37 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_19)), (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_1] [i_1] [i_10]))) : (14181956000527732385ULL)))))) ? (var_19) : (((long long int) arr_2 [i_1] [i_10]))));
                var_38 = ((/* implicit */int) arr_16 [i_1] [i_7] [i_1] [(short)0]);
            }
            for (long long int i_11 = 0; i_11 < 15; i_11 += 1) 
            {
                var_39 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((arr_16 [i_1] [i_11] [i_1] [i_1]) - (arr_16 [i_1] [i_1] [i_1] [i_1])))) : (((((/* implicit */unsigned long long int) arr_16 [i_1] [i_1] [i_7] [i_1])) + (arr_10 [i_1] [i_7] [4LL])))));
                arr_34 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) var_0))) ? (arr_8 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_8)) | (((/* implicit */int) var_0)))))))));
                var_40 = arr_1 [4U] [i_1];
                var_41 = ((unsigned char) (unsigned short)6);
                var_42 = ((/* implicit */_Bool) ((unsigned char) arr_17 [i_1] [i_1] [i_1] [i_7] [i_1]));
            }
            for (int i_12 = 0; i_12 < 15; i_12 += 4) /* same iter space */
            {
                var_43 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 18162594486039488007ULL)) ? (((/* implicit */int) (unsigned short)27648)) : (((((/* implicit */int) (unsigned short)20933)) % (-912040242))))));
                var_44 -= ((/* implicit */signed char) ((unsigned short) ((long long int) arr_10 [i_1] [i_7] [i_12])));
                /* LoopNest 2 */
                for (int i_13 = 1; i_13 < 13; i_13 += 2) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 15; i_14 += 4) 
                    {
                        {
                            var_45 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (unsigned char)61)), (8989607068696576ULL)));
                            arr_42 [i_14] [(short)10] [i_12] [i_7] [i_1] |= ((/* implicit */unsigned long long int) ((((int) max((var_4), (-912040259)))) + (((((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_19 [i_1] [i_7] [i_7] [i_12])) : (arr_4 [i_12]))) + (((/* implicit */int) arr_25 [i_7] [i_12]))))));
                            var_46 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_19 [i_1] [i_1] [i_1] [i_14])) > (((/* implicit */int) var_1)))))) + (((((/* implicit */long long int) -1)) * (-25LL)))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (int i_15 = 0; i_15 < 15; i_15 += 4) /* same iter space */
            {
                var_47 = ((/* implicit */unsigned long long int) ((signed char) arr_22 [i_1] [i_7] [i_1]));
                /* LoopSeq 1 */
                for (int i_16 = 0; i_16 < 15; i_16 += 2) 
                {
                    var_48 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_1] [i_15] [i_1])) ? (arr_8 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))));
                    arr_50 [i_16] [i_1] [i_16] [i_16] [i_16] [i_1] = ((/* implicit */long long int) ((unsigned int) arr_17 [i_1] [i_1] [i_15] [i_15] [i_16]));
                }
                var_49 = ((/* implicit */_Bool) arr_14 [i_1] [i_15] [i_1] [i_1]);
            }
        }
        arr_51 [i_1] = ((/* implicit */int) var_16);
        var_50 *= ((/* implicit */unsigned char) arr_45 [i_1] [(_Bool)1] [i_1] [i_1]);
        arr_52 [4] [4] |= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned int) arr_31 [i_1] [i_1] [(unsigned short)14])) <= (var_10)))) >> ((((~(arr_31 [i_1] [i_1] [10]))) - (1615804516)))));
        var_51 = ((/* implicit */int) ((((/* implicit */_Bool) arr_44 [i_1])) ? (min((((var_17) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (17688790641407443721ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_7 [i_1] [(unsigned char)1] [i_1]), (var_3)))))));
    }
    var_52 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_17)))) ? (((/* implicit */unsigned long long int) (+(-3447682276634826693LL)))) : (((var_11) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))));
    var_53 = ((/* implicit */unsigned long long int) min((var_53), (((/* implicit */unsigned long long int) (+((~(var_10))))))));
}
