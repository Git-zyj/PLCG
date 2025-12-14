/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102921
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)7)) ? (((((/* implicit */_Bool) (short)19305)) ? (var_11) : (var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0 + 3])) || (((/* implicit */_Bool) arr_1 [i_0 + 4]))))))));
        /* LoopSeq 2 */
        for (int i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) /* same iter space */
            {
                arr_8 [(signed char)12] [4] [i_1] [(signed char)12] = max(((+(((/* implicit */int) (short)5591)))), (1391307547));
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    for (unsigned char i_4 = 0; i_4 < 14; i_4 += 4) 
                    {
                        {
                            var_21 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_7 [i_0] [0])) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) var_10))))))) : ((+(((((/* implicit */unsigned int) ((/* implicit */int) var_15))) * (var_12)))))));
                            arr_15 [i_3] [i_3] [6ULL] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) max((max((var_7), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))))), (13763370196070275667ULL)));
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) == (8935766863474433985ULL))) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)61940))) ^ (((((/* implicit */_Bool) var_15)) ? (-2103219697542026619LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))))));
                            var_22 = ((/* implicit */long long int) arr_5 [(signed char)8] [(signed char)8] [i_0 + 2]);
                        }
                    } 
                } 
                var_23 = ((/* implicit */long long int) var_9);
            }
            /* vectorizable */
            for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 1) /* same iter space */
            {
                var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)12532)) << ((((((-2147483647 - 1)) - (-2147483618))) + (43)))));
                var_25 = ((/* implicit */unsigned char) 18446744073709551611ULL);
            }
            var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)87)))), (((/* implicit */int) (_Bool)0))))))))));
        }
        /* vectorizable */
        for (short i_6 = 0; i_6 < 14; i_6 += 1) 
        {
            var_27 = ((/* implicit */_Bool) var_5);
            /* LoopNest 2 */
            for (long long int i_7 = 0; i_7 < 14; i_7 += 3) 
            {
                for (unsigned long long int i_8 = 2; i_8 < 10; i_8 += 4) 
                {
                    {
                        var_28 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */int) (signed char)-102)) - (((/* implicit */int) (short)(-32767 - 1))))) : (((/* implicit */int) var_5))));
                        arr_30 [i_6] [i_0 + 1] [i_0 + 1] [i_6] [i_0] [i_6] = ((/* implicit */unsigned int) (short)25281);
                        var_29 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-4)) ? (2951899343U) : (4294967290U)));
                        /* LoopSeq 2 */
                        for (signed char i_9 = 1; i_9 < 12; i_9 += 3) 
                        {
                            arr_35 [i_0] [i_6] [i_0] [i_8] [i_9 + 1] |= ((/* implicit */unsigned int) arr_11 [i_9] [i_9 + 2] [i_9 + 2] [10ULL] [i_0 + 2] [i_0] [i_0 + 3]);
                            var_30 |= var_14;
                            var_31 = ((/* implicit */unsigned char) ((signed char) var_15));
                            var_32 = ((/* implicit */unsigned int) (unsigned char)233);
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 3) 
                        {
                            arr_38 [i_6] [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)219))));
                            var_33 -= ((short) 16760832);
                            arr_39 [i_7] [i_8 + 2] [i_6] = ((/* implicit */unsigned int) arr_2 [i_8 + 1] [i_0]);
                        }
                    }
                } 
            } 
        }
        var_34 |= ((/* implicit */unsigned short) var_4);
    }
    for (unsigned char i_11 = 1; i_11 < 10; i_11 += 4) /* same iter space */
    {
        var_35 = ((/* implicit */short) arr_19 [i_11] [i_11 + 3] [i_11] [i_11]);
        arr_42 [i_11] = ((/* implicit */short) ((((/* implicit */int) var_6)) / (((((/* implicit */_Bool) max((((/* implicit */int) (short)-25645)), (0)))) ? ((-(((/* implicit */int) (signed char)35)))) : (((((/* implicit */int) (short)-26725)) * (((/* implicit */int) (unsigned char)39))))))));
        var_36 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) -35184372088832LL)) ? (2565575219U) : (((/* implicit */unsigned int) 33554431)))))), (((((/* implicit */_Bool) (+(-535076443)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_1), (((/* implicit */short) var_13)))))) : (((((/* implicit */_Bool) (unsigned char)17)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_11)))))));
    }
    var_37 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_9))));
    var_38 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) + ((-(((/* implicit */int) (unsigned char)0))))));
}
