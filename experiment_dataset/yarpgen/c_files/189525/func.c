/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189525
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) 693829858U)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) ((signed char) var_0))), (var_2))))) : (((((/* implicit */_Bool) var_3)) ? (var_9) : (var_0)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 1) /* same iter space */
        {
            var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 + 1]))) : (var_7))))));
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_4) ? (((/* implicit */unsigned int) 824411931)) : (var_6)))) ? (((/* implicit */int) arr_0 [i_1 + 2])) : (((((/* implicit */_Bool) var_7)) ? (1423898126) : (824411931)))));
        }
        for (unsigned char i_2 = 1; i_2 < 10; i_2 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned int i_5 = 2; i_5 < 10; i_5 += 3) 
                    {
                        {
                            arr_18 [i_3] [i_3] [i_2] [i_3] = ((/* implicit */signed char) 824411926);
                            var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)127)) ? (4294705152U) : (0U))))));
                            arr_19 [i_0] [i_2] [i_3] [12] [i_0] [(unsigned char)2] [i_3] |= ((/* implicit */unsigned short) ((824411931) / (536870911)));
                        }
                    } 
                } 
            } 
            arr_20 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) ((signed char) arr_8 [i_2]))) : (((((/* implicit */_Bool) (signed char)-1)) ? (-536870915) : (-824411926)))));
            var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((unsigned short) ((unsigned char) 536870911))))));
        }
        for (unsigned char i_6 = 1; i_6 < 10; i_6 += 1) /* same iter space */
        {
            arr_24 [(_Bool)1] = ((/* implicit */unsigned short) (unsigned char)16);
            var_14 = ((/* implicit */signed char) ((0) != (((/* implicit */int) arr_13 [i_6] [i_6 - 1] [i_6 + 2] [(unsigned char)11]))));
            arr_25 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) 824411926)) ? (((/* implicit */int) (unsigned short)48924)) : (((/* implicit */int) (unsigned char)25)))));
        }
        for (unsigned char i_7 = 1; i_7 < 10; i_7 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_8 = 0; i_8 < 13; i_8 += 2) 
            {
                for (unsigned short i_9 = 0; i_9 < 13; i_9 += 3) 
                {
                    {
                        /* LoopSeq 4 */
                        for (int i_10 = 1; i_10 < 12; i_10 += 4) /* same iter space */
                        {
                            var_15 = ((/* implicit */int) min((var_15), ((~(((/* implicit */int) ((var_9) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                            var_16 = ((((((/* implicit */_Bool) (unsigned short)29600)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29262))) : (var_9))) * (((/* implicit */unsigned int) ((int) (unsigned char)16))));
                        }
                        for (int i_11 = 1; i_11 < 12; i_11 += 4) /* same iter space */
                        {
                            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)65530))))))))));
                            var_18 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1423898126)) ? (((/* implicit */int) ((unsigned short) (_Bool)1))) : (arr_30 [i_0] [i_8] [i_11])));
                        }
                        for (int i_12 = 1; i_12 < 12; i_12 += 4) /* same iter space */
                        {
                            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) (-(arr_27 [i_0] [i_7] [i_0])))) ? (((/* implicit */unsigned int) -824411922)) : (((((/* implicit */_Bool) var_5)) ? (arr_37 [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_7] [i_8] [i_9] [i_12]))))))))));
                            arr_41 [i_0] [i_0] [(unsigned short)3] [i_9] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_26 [i_7 - 1] [i_12 + 1]))));
                            var_20 += ((/* implicit */unsigned short) ((((var_0) == (var_7))) ? ((-(var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)54)))));
                            arr_42 [i_0] [i_0] [i_0] [i_8] [i_0] |= ((/* implicit */unsigned char) var_2);
                        }
                        for (int i_13 = 0; i_13 < 13; i_13 += 3) 
                        {
                            var_21 |= ((/* implicit */int) (unsigned short)5);
                            var_22 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_3))));
                            var_23 -= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)3))))) + (((/* implicit */int) (unsigned short)65531))));
                            arr_45 [i_0] [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) (unsigned char)108)) : (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? (var_7) : (((/* implicit */unsigned int) (-2147483647 - 1))))) : (((unsigned int) 3280719523U))));
                            arr_46 [i_9] [i_9] [i_8] [i_7] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_7 + 3] [i_7 + 2] [i_7 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (((((/* implicit */_Bool) (signed char)-64)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_8])))))));
                        }
                        var_24 = ((((/* implicit */_Bool) -1686288966)) ? (((((/* implicit */_Bool) arr_37 [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_0] [i_9] [i_7] [i_7] [i_7] [i_7]))) : (var_0))) : (((((/* implicit */_Bool) var_8)) ? (var_9) : (var_0))));
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) arr_3 [i_7] [i_7 + 1]))));
                    }
                } 
            } 
            var_26 &= ((/* implicit */_Bool) arr_23 [i_7 + 1] [i_7 + 2]);
            arr_47 [i_0] [i_7] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_26 [i_0] [i_7 + 2])) : (((/* implicit */int) (_Bool)0))));
        }
        var_27 = ((/* implicit */unsigned char) arr_15 [2] [i_0] [i_0] [i_0]);
        /* LoopSeq 1 */
        for (unsigned char i_14 = 0; i_14 < 13; i_14 += 3) 
        {
            arr_50 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((_Bool) (unsigned char)119)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -824411907)) ? (arr_8 [i_0]) : (-1423898110)))) : (var_7)));
            var_28 += ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2209352275U)) ? (2085615020U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))));
            arr_51 [i_0] [i_14] = ((/* implicit */signed char) ((arr_26 [i_0] [i_14]) && (arr_26 [i_0] [i_14])));
            var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) (!(((((/* implicit */int) (signed char)70)) > (((/* implicit */int) var_4)))))))));
            /* LoopNest 3 */
            for (unsigned int i_15 = 2; i_15 < 10; i_15 += 1) 
            {
                for (signed char i_16 = 2; i_16 < 9; i_16 += 4) 
                {
                    for (signed char i_17 = 0; i_17 < 13; i_17 += 3) 
                    {
                        {
                            arr_58 [i_17] [i_16] [i_15] [i_15] [i_0] [i_0] = ((/* implicit */unsigned char) ((_Bool) ((unsigned int) var_2)));
                            var_30 = ((/* implicit */signed char) (unsigned short)0);
                            var_31 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_57 [i_16 + 4] [i_14] [i_16 + 4] [i_15 + 2] [i_16 + 4])) << (((((/* implicit */int) arr_16 [i_0] [i_16 + 2] [i_15 + 1])) - (37)))));
                            var_32 = ((((/* implicit */_Bool) arr_11 [i_0] [i_14] [i_15])) ? (((/* implicit */int) arr_11 [i_15] [i_14] [i_15])) : (((/* implicit */int) arr_11 [i_16] [i_16 - 1] [i_15])));
                        }
                    } 
                } 
            } 
        }
    }
}
