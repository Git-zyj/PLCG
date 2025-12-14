/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120404
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
    var_12 = max((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_5)))))))), ((+(max((959507446), (((/* implicit */int) (unsigned short)51994)))))));
    var_13 = ((/* implicit */signed char) (-(((/* implicit */int) var_4))));
    var_14 += min((((/* implicit */int) max(((unsigned char)153), (((/* implicit */unsigned char) (_Bool)1))))), ((+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)153))))))));
    var_15 |= max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((var_3) <= (((/* implicit */int) (short)30314))))) : (var_7))), (min(((-(var_7))), (((/* implicit */int) var_4)))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 4 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_2 = 3; i_2 < 16; i_2 += 1) 
            {
                arr_6 [i_1] [i_0] |= (~((~(arr_2 [i_1]))));
                var_16 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) arr_2 [i_1])) : (arr_3 [9] [i_1])));
                var_17 = ((/* implicit */_Bool) var_5);
                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (+(arr_2 [i_2 + 2]))))));
            }
            var_19 = ((/* implicit */long long int) var_6);
            var_20 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (arr_3 [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))))), (((/* implicit */long long int) ((short) arr_3 [i_0] [i_0])))));
        }
        /* vectorizable */
        for (unsigned short i_3 = 3; i_3 < 17; i_3 += 3) 
        {
            var_21 *= ((/* implicit */short) (~(arr_0 [i_3 - 2] [i_3 - 1])));
            var_22 ^= ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5)))) | ((~(((/* implicit */int) arr_5 [i_0])))));
            var_23 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) -1210392710)) % (arr_3 [i_3 - 2] [i_3 + 1])));
        }
        for (int i_4 = 1; i_4 < 17; i_4 += 1) 
        {
            var_24 *= ((/* implicit */_Bool) ((short) -1338895671));
            var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(min((((/* implicit */long long int) (signed char)-1)), (2315611446644839281LL))))))));
            var_26 &= ((/* implicit */unsigned char) (-(((((/* implicit */int) min(((unsigned char)148), (((/* implicit */unsigned char) arr_4 [i_0] [i_0] [i_0]))))) + (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)146)), ((unsigned short)9748))))))));
            var_27 = ((/* implicit */int) min((var_27), (max((((((/* implicit */int) var_5)) | (((/* implicit */int) (unsigned char)146)))), (((((((/* implicit */int) (unsigned char)177)) / (((/* implicit */int) (short)13548)))) / (((/* implicit */int) (unsigned char)155))))))));
        }
        for (signed char i_5 = 1; i_5 < 17; i_5 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 1; i_6 < 16; i_6 += 3) 
            {
                for (unsigned short i_7 = 1; i_7 < 17; i_7 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (int i_8 = 1; i_8 < 17; i_8 += 4) 
                        {
                            arr_22 [(_Bool)1] [(_Bool)1] [i_6] [i_7 - 1] [i_8 + 1] = ((/* implicit */short) ((min((var_3), (((/* implicit */int) arr_4 [10] [10] [i_7 - 1])))) % ((+(((/* implicit */int) arr_9 [i_0] [i_6 + 2]))))));
                            var_28 = ((/* implicit */signed char) (unsigned char)177);
                        }
                        /* vectorizable */
                        for (unsigned short i_9 = 0; i_9 < 18; i_9 += 3) 
                        {
                            var_29 = ((/* implicit */_Bool) var_2);
                            var_30 += (~((+(((/* implicit */int) arr_7 [i_6])))));
                            var_31 = ((/* implicit */unsigned char) (-((~(var_3)))));
                        }
                        for (long long int i_10 = 0; i_10 < 18; i_10 += 1) 
                        {
                            var_32 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) arr_23 [i_10] [i_7 - 1] [i_0] [i_5 + 1] [i_0])) ? (var_0) : (((/* implicit */int) var_11)))) : (((/* implicit */int) arr_14 [i_6 - 1] [i_10] [i_10]))))) * (min((((/* implicit */long long int) (+(((/* implicit */int) var_8))))), ((-(arr_3 [16] [i_0])))))));
                            var_33 &= ((/* implicit */unsigned char) max((min(((+(arr_0 [i_0] [i_10]))), (min((var_0), (((/* implicit */int) (unsigned short)54296)))))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)109)))))));
                        }
                        var_34 = ((/* implicit */short) min((((int) arr_25 [i_0])), (max((669260503), ((+(var_3)))))));
                        var_35 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (unsigned short)54304)), (min(((+(arr_18 [i_7] [(short)10] [i_5 - 1] [i_0]))), (((/* implicit */long long int) -409430023))))));
                    }
                } 
            } 
            var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) arr_3 [i_5] [i_5]))));
            /* LoopNest 2 */
            for (signed char i_11 = 0; i_11 < 18; i_11 += 4) 
            {
                for (long long int i_12 = 0; i_12 < 18; i_12 += 1) 
                {
                    {
                        var_37 ^= ((/* implicit */long long int) min((((/* implicit */int) (unsigned short)60137)), (min((((/* implicit */int) min(((unsigned char)109), (((/* implicit */unsigned char) (signed char)47))))), ((+(((/* implicit */int) var_2))))))));
                        var_38 = var_0;
                        arr_33 [i_12] [i_11] [i_5] [i_0] [i_0] [i_0] = (unsigned char)146;
                        arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) var_10);
                    }
                } 
            } 
            var_39 += ((/* implicit */signed char) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_12 [i_0] [i_0])) : (((/* implicit */int) var_8)))), ((~(((/* implicit */int) (unsigned char)0))))));
        }
        var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) (~((-(((/* implicit */int) (short)-13549)))))))));
    }
    for (long long int i_13 = 0; i_13 < 18; i_13 += 4) /* same iter space */
    {
        var_41 += ((/* implicit */signed char) ((((((/* implicit */int) var_5)) != (var_0))) || (((/* implicit */_Bool) arr_21 [i_13] [i_13] [(unsigned char)8] [i_13] [i_13]))));
        var_42 = ((/* implicit */unsigned long long int) (~((-((~(((/* implicit */int) var_10))))))));
        var_43 = var_9;
    }
}
