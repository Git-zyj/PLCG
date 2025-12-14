/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166642
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
    var_17 = ((/* implicit */long long int) 17230605369384478272ULL);
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 136339441844224ULL))))))) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))) : (((((/* implicit */int) ((unsigned short) var_16))) / (((((/* implicit */_Bool) (unsigned short)0)) ? (-2024435576) : (var_6)))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        var_19 ^= var_5;
        var_20 = (-(((/* implicit */int) (unsigned short)9728)));
    }
    for (short i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 1; i_2 < 22; i_2 += 4) 
        {
            var_21 &= ((/* implicit */_Bool) ((unsigned short) ((((((/* implicit */_Bool) 4940165144645731656ULL)) ? (((/* implicit */int) (signed char)65)) : (((/* implicit */int) (unsigned short)55798)))) & ((+(var_6))))));
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */int) var_12)) * (((/* implicit */int) var_15)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 4468919806282422869ULL)))))));
        }
        arr_8 [(unsigned short)4] [i_1] = ((/* implicit */short) min((((/* implicit */int) var_12)), (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) var_12))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_14 [i_3] = ((/* implicit */unsigned long long int) (!((_Bool)1)));
            /* LoopNest 2 */
            for (unsigned short i_5 = 1; i_5 < 17; i_5 += 4) 
            {
                for (short i_6 = 0; i_6 < 20; i_6 += 1) 
                {
                    {
                        arr_20 [i_6] [i_5] [i_4] [i_4] [i_3] [i_3] = (+(arr_12 [i_3] [i_3]));
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) var_7))));
                        arr_21 [i_3] [i_3] [i_5 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_5 - 1] [i_5 + 1] [i_6])) || (((/* implicit */_Bool) ((long long int) var_3)))));
                        arr_22 [i_3] [(unsigned short)4] [(unsigned short)4] [i_6] = ((/* implicit */unsigned char) var_15);
                    }
                } 
            } 
            arr_23 [i_3] [i_3] [i_3] = ((/* implicit */long long int) arr_6 [i_3] [i_4] [i_4]);
        }
        for (unsigned long long int i_7 = 1; i_7 < 17; i_7 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_8 = 4; i_8 < 19; i_8 += 4) /* same iter space */
            {
                arr_31 [i_3] [(signed char)16] [i_8] = ((/* implicit */short) ((_Bool) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (unsigned short)0)))));
                var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) arr_3 [i_3]))));
                var_25 -= ((/* implicit */long long int) (((!(((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) (unsigned short)65508)))))) ? (max((((((/* implicit */_Bool) var_7)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) min((579458490), (((/* implicit */int) var_11))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_7] [i_7 + 3] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_1 [i_3]), (((/* implicit */short) (signed char)(-127 - 1))))))) : (arr_5 [i_7 + 1]))))));
                arr_32 [i_8] [i_7] [i_3] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_9 [(unsigned short)1])) ? (((/* implicit */unsigned long long int) 1586117326)) : (var_13))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_27 [i_7])) < (((/* implicit */int) (_Bool)1)))))))) ? (28942970) : (((var_1) ? (((/* implicit */int) arr_4 [i_3] [i_7 - 1])) : (max((-1019492047), (-1019492047)))))));
            }
            for (unsigned int i_9 = 4; i_9 < 19; i_9 += 4) /* same iter space */
            {
                arr_36 [i_3] [i_7] [i_9] = ((/* implicit */short) min((arr_13 [i_3] [i_7 + 2] [i_9 + 1]), (((((/* implicit */_Bool) arr_13 [i_7 - 1] [i_7 + 1] [i_9 - 2])) ? (arr_13 [i_3] [i_7 + 1] [i_9 - 2]) : (arr_13 [(_Bool)1] [i_7 + 1] [i_9 - 4])))));
                var_26 = ((/* implicit */short) arr_35 [i_9] [i_3] [i_3]);
                var_27 ^= ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_9 - 4])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)32746))))) : ((-(arr_29 [i_7 + 2])))));
            }
            for (unsigned int i_10 = 4; i_10 < 19; i_10 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 1) 
                {
                    for (signed char i_12 = 2; i_12 < 17; i_12 += 2) 
                    {
                        {
                            arr_45 [9ULL] [i_12] [i_10 - 2] [i_11] [i_12] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((var_7) | (((/* implicit */long long int) ((/* implicit */int) max((var_9), (var_4)))))))), (max((((((/* implicit */_Bool) (unsigned char)255)) ? (34902897112121344ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_3] [i_10] [i_10] [i_12]))))), (((/* implicit */unsigned long long int) 1501527893U))))));
                            var_28 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((2793439398U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65530))))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_12 + 1])))))) ? (((((/* implicit */_Bool) var_13)) ? (arr_28 [(signed char)11] [i_3] [i_10 + 1] [i_3]) : (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_3])))));
                            arr_46 [i_3] [i_3] [i_7] [i_10 - 4] [i_10 - 4] [i_11] [i_12] = ((/* implicit */unsigned char) 2793439375U);
                            var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) arr_33 [i_3] [i_10 - 3] [i_10])), (arr_6 [i_7 + 3] [i_10 + 1] [i_11]))), (((((/* implicit */_Bool) arr_33 [i_10 - 3] [i_10 - 1] [i_10 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_7 + 2] [i_10 + 1] [i_11]))) : (arr_6 [i_7 + 3] [i_10 + 1] [i_11]))))))));
                        }
                    } 
                } 
                arr_47 [i_3] [i_7] [i_10 - 2] [i_3] = ((/* implicit */unsigned short) ((long long int) (unsigned short)57245));
            }
            arr_48 [i_7] = ((/* implicit */signed char) min((max((arr_13 [i_7 + 3] [i_7 - 1] [i_7 + 2]), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_13 [i_7 + 2] [i_7 + 1] [i_7 + 2])))))));
            var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_34 [i_7 + 3]), (arr_34 [i_7 - 1])))) - (((/* implicit */int) var_4))));
            var_31 += ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)255)), (arr_1 [i_7 + 1])))) ? (((/* implicit */unsigned long long int) ((var_1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_15))))) : (15973363455007132246ULL))));
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            var_32 = ((/* implicit */signed char) (((((~(((/* implicit */int) var_9)))) > (((/* implicit */int) (unsigned short)16240)))) ? (((/* implicit */int) (unsigned short)54313)) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_3])) < (((/* implicit */int) arr_0 [i_13])))))));
            arr_51 [i_13] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)13520)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : (-7963386960720102311LL)));
            /* LoopNest 3 */
            for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 2) 
            {
                for (unsigned long long int i_15 = 1; i_15 < 19; i_15 += 4) 
                {
                    for (unsigned char i_16 = 0; i_16 < 20; i_16 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */short) ((max((var_8), (((/* implicit */unsigned long long int) (unsigned short)2531)))) >> (((/* implicit */int) ((_Bool) (_Bool)1)))));
                            arr_59 [i_3] [i_13] [i_14] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((short) max((((/* implicit */long long int) var_11)), (arr_29 [i_3]))))), (((unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) arr_10 [i_3])) : (arr_2 [i_13]))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_17 = 4; i_17 < 18; i_17 += 1) 
        {
            var_34 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)32767))))) ? (max((((/* implicit */int) var_9)), (2147483647))) : ((~(((/* implicit */int) arr_3 [i_17]))))))) ? (arr_6 [i_3] [i_17] [i_17 - 3]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) (unsigned short)16320))))))));
            var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) arr_6 [i_3] [i_3] [i_17]))));
            arr_62 [i_3] = ((/* implicit */unsigned short) ((((var_14) == (arr_12 [i_17 - 1] [i_17 - 1]))) ? ((~(arr_12 [i_17 - 4] [i_17 + 2]))) : (((/* implicit */unsigned long long int) 1501527889U))));
            var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)3)) ? (209698985849113232LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37954))) : (2793439374U))))))) || (((/* implicit */_Bool) -919752391))));
        }
        var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)247)) ? (-1019492047) : (((/* implicit */int) (unsigned char)49)))))));
        arr_63 [i_3] = ((/* implicit */unsigned long long int) var_9);
    }
}
