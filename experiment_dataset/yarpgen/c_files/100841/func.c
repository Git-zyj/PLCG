/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100841
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            arr_5 [i_0 - 1] [i_1] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
            var_10 = ((/* implicit */unsigned long long int) (short)1);
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_11 = ((_Bool) ((((/* implicit */int) ((_Bool) arr_7 [i_0 - 2] [i_2] [i_2]))) % (((/* implicit */int) var_8))));
            var_12 |= ((/* implicit */int) ((_Bool) max((((/* implicit */unsigned long long int) ((-1028267763) + (arr_7 [i_2] [i_2] [i_0 - 4])))), (arr_3 [i_2] [i_2] [i_0 + 1]))));
            var_13 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))), (((unsigned long long int) min((((/* implicit */unsigned long long int) 4294967295U)), (var_4))))));
            var_14 = ((/* implicit */unsigned char) ((unsigned int) ((((((/* implicit */_Bool) arr_6 [i_0 - 4] [i_2])) ? (var_1) : (arr_4 [i_0 + 1] [i_2] [i_0 - 4]))) - (((/* implicit */unsigned int) ((arr_2 [i_0 - 1] [i_2] [i_0 - 2]) - (((/* implicit */int) arr_0 [i_0 - 3] [i_2]))))))));
        }
        arr_8 [i_0 - 3] = ((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0 + 2] [i_0 - 1]);
    }
    var_15 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (((max((((/* implicit */long long int) (unsigned char)255)), (-873358527866297069LL))) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)48)))))));
    var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((_Bool) ((var_4) ^ (var_2))))), (((unsigned int) ((int) var_7)))));
    /* LoopSeq 4 */
    for (short i_3 = 2; i_3 < 16; i_3 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (long long int i_5 = 0; i_5 < 19; i_5 += 1) 
            {
                arr_17 [i_3 - 2] [i_4] [i_5] = (+(((unsigned long long int) arr_16 [i_3 + 2] [i_4] [i_5])));
                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (+(((var_6) / (((/* implicit */int) var_3)))))))));
            }
            var_18 = ((/* implicit */_Bool) (+(((((/* implicit */int) arr_13 [i_3 - 1] [i_4])) / (-1)))));
            var_19 = ((/* implicit */_Bool) ((signed char) ((unsigned int) arr_16 [i_3 + 2] [i_3 - 1] [i_3 + 1])));
            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (unsigned short)20755))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            arr_21 [i_3 + 2] [i_3 + 2] [i_3 - 2] = ((/* implicit */unsigned long long int) arr_16 [i_3 + 1] [i_6] [i_6]);
            var_21 = ((/* implicit */int) min(((_Bool)0), ((_Bool)1)));
        }
        var_22 = ((min((((/* implicit */unsigned long long int) ((int) 1431872088))), (((unsigned long long int) var_4)))) % (((((/* implicit */_Bool) arr_11 [i_3 - 2] [i_3 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 10502252732803290071ULL)))))) : (((unsigned long long int) (short)8976)))));
        var_23 = ((/* implicit */signed char) (!((((-(((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) ((_Bool) arr_20 [i_3 - 1] [i_3 - 2] [i_3 - 1])))))));
    }
    for (unsigned char i_7 = 4; i_7 < 9; i_7 += 3) 
    {
        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) arr_22 [i_7 - 2]))));
        /* LoopSeq 3 */
        for (unsigned long long int i_8 = 2; i_8 < 7; i_8 += 3) 
        {
            var_25 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_13 [i_8 + 1] [i_8 + 3])) << (((((3554399358712138960ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)50))))) - (3554399358712138981ULL))))) ^ (((((_Bool) arr_4 [i_7 - 2] [i_7 - 4] [i_8 + 1])) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_20 [i_7 - 2] [i_7 - 2] [i_7 - 4])))) : (((/* implicit */int) ((unsigned short) (_Bool)1)))))));
            arr_26 [i_8 + 1] [i_8 + 1] = ((/* implicit */unsigned long long int) max((8888947449132732242LL), (288230376147517440LL)));
            var_26 = ((arr_18 [i_7 - 1] [i_8 - 1] [i_8 + 2]) != (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (5117787542568123963ULL))));
            arr_27 [i_7 - 1] [i_8 - 1] [i_7 - 1] = ((/* implicit */int) (~(((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_7 - 4] [i_8 - 1]))) > (arr_14 [i_7 + 1] [i_7 - 3] [i_8 + 1]))))) / (((unsigned int) (unsigned char)207))))));
            var_27 = ((unsigned long long int) (_Bool)1);
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_10 = 2; i_10 < 8; i_10 += 2) 
            {
                arr_34 [i_9] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)205))) > (var_7))) ? (((arr_7 [i_10 + 1] [i_9] [i_7 + 1]) % (((/* implicit */int) (unsigned char)213)))) : (((arr_7 [i_10 + 1] [i_9] [i_7 + 1]) / (arr_7 [i_10 - 2] [i_9] [i_7 - 3]))));
                var_28 = ((/* implicit */signed char) (((-(arr_29 [i_7 - 4] [i_9] [i_10 + 1]))) * (((/* implicit */int) ((_Bool) ((int) arr_13 [i_9] [i_10 - 2]))))));
                arr_35 [i_10 - 2] [i_9] = ((/* implicit */_Bool) var_6);
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_12 = 1; i_12 < 9; i_12 += 3) 
                {
                    for (unsigned int i_13 = 1; i_13 < 7; i_13 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))));
                            var_30 += ((/* implicit */unsigned short) ((_Bool) ((long long int) (~(((/* implicit */int) var_3))))));
                        }
                    } 
                } 
                arr_46 [i_7 - 2] [i_9] [i_11] = ((/* implicit */long long int) var_2);
                var_31 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_31 [i_11] [i_9] [i_7 + 1]) << (((/* implicit */int) min((((/* implicit */signed char) arr_12 [i_7 - 4] [i_9])), (arr_15 [i_7 - 4] [i_9] [i_11]))))))) ? (((/* implicit */long long int) arr_42 [i_7 - 2])) : (((long long int) max((-2162844469907989840LL), (((/* implicit */long long int) arr_30 [i_7 + 1] [i_9])))))));
                var_32 = ((/* implicit */short) ((unsigned int) ((_Bool) arr_3 [i_11] [i_9] [i_7 - 4])));
            }
            arr_47 [i_7 - 3] [i_9] [i_9] = ((((/* implicit */unsigned long long int) (+(15)))) != (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (((3115670018685067298ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)203))))))));
            var_33 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((arr_42 [i_7 - 4]) << (((((/* implicit */int) (short)-24132)) + (24132)))))))) ^ (((((/* implicit */_Bool) (unsigned char)203)) ? (8036517144763004110LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-24143)))))));
        }
        for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_15 = 0; i_15 < 10; i_15 += 3) 
            {
                for (unsigned char i_16 = 0; i_16 < 10; i_16 += 4) 
                {
                    {
                        var_34 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((var_4) * (((/* implicit */unsigned long long int) 4294967295U)))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_16]))) / (1U))))))) ? (min((1393619892), ((+(arr_51 [i_14] [i_14] [i_14]))))) : (((((/* implicit */int) ((short) arr_30 [i_16] [i_14]))) - ((+(arr_29 [i_7 - 2] [i_7 - 3] [i_7 - 1])))))));
                        var_35 = ((/* implicit */short) ((_Bool) 3115670018685067295ULL));
                    }
                } 
            } 
            var_36 = var_2;
            var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) (_Bool)1))));
            var_38 = ((/* implicit */unsigned int) min((var_38), ((+(min((((/* implicit */unsigned int) max((var_5), (arr_37 [i_7 - 3] [i_7 + 1] [i_14] [i_14])))), (((((/* implicit */_Bool) arr_53 [i_7 - 3] [i_7 - 2])) ? (2515955596U) : (arr_31 [i_7 + 1] [i_14] [i_14])))))))));
            var_39 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_55 [i_7 - 1] [i_14]))) % ((~(4216625279133597654ULL)))));
        }
    }
    for (long long int i_17 = 0; i_17 < 17; i_17 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_18 = 4; i_18 < 16; i_18 += 3) 
        {
            for (unsigned long long int i_19 = 1; i_19 < 15; i_19 += 2) 
            {
                {
                    var_40 = ((/* implicit */_Bool) min((1779011699U), (((/* implicit */unsigned int) (unsigned char)203))));
                    var_41 += ((/* implicit */_Bool) ((((unsigned long long int) 9575785855265686522ULL)) ^ (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) (signed char)104)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (3445250748U)))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_20 = 1; i_20 < 15; i_20 += 4) 
                    {
                        var_42 = ((/* implicit */unsigned long long int) arr_65 [i_19 - 1] [i_19 - 1] [i_18 - 3] [i_18 - 1]);
                        var_43 = ((/* implicit */unsigned long long int) 4294967285U);
                    }
                }
            } 
        } 
        var_44 = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)50)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31558))) : (8ULL))) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) max((arr_0 [i_17] [i_17]), (((/* implicit */unsigned char) arr_58 [i_17]))))))))));
        var_45 = ((/* implicit */signed char) var_5);
    }
    for (signed char i_21 = 2; i_21 < 8; i_21 += 3) 
    {
        var_46 = ((/* implicit */unsigned short) ((signed char) arr_62 [i_21 - 2] [i_21 - 2] [i_21 - 1] [i_21 + 2]));
        var_47 = ((/* implicit */long long int) (_Bool)0);
    }
    var_48 = ((/* implicit */_Bool) var_7);
}
