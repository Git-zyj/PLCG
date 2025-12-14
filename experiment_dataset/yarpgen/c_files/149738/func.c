/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149738
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    {
                        var_13 *= ((/* implicit */unsigned int) ((((((((var_11) + (9223372036854775807LL))) << (((((/* implicit */int) var_12)) - (203))))) << (((((var_8) + (838120156669821477LL))) - (41LL))))) - ((+(((long long int) arr_7 [i_1] [i_2] [i_3]))))));
                        var_14 &= ((/* implicit */short) -6987155860811967679LL);
                        var_15 -= ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_6 [i_1] [(unsigned short)4] [i_1])))) >= (((((/* implicit */_Bool) arr_12 [i_3])) ? (arr_11 [16U]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41592))))))))));
                    }
                } 
            } 
        } 
        var_16 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_10 [i_0 - 3] [i_0 - 2] [i_0] [i_0])))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))) : (1073741823U)))));
        var_17 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_8))), ((+(((((/* implicit */long long int) ((/* implicit */int) var_2))) / (var_5)))))));
        /* LoopSeq 2 */
        for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
        {
            arr_16 [i_0 - 1] [i_0] = ((/* implicit */unsigned int) var_1);
            var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)23963))));
            arr_17 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */int) (unsigned short)45835)) : (((/* implicit */int) (unsigned char)32))));
            var_19 &= ((/* implicit */unsigned int) var_10);
        }
        for (unsigned char i_5 = 2; i_5 < 18; i_5 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_6 = 1; i_6 < 18; i_6 += 3) 
            {
                for (unsigned char i_7 = 0; i_7 < 19; i_7 += 3) 
                {
                    {
                        var_20 += (-(4611686018427387904ULL));
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)195)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6734))) : (1431796889U))))));
                    }
                } 
            } 
            var_22 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) 352706305U)), (3732665900108959452ULL)));
            var_23 = ((/* implicit */short) (-(((((((/* implicit */_Bool) (unsigned short)41592)) ? (((/* implicit */long long int) arr_11 [i_5])) : (var_5))) & (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 1048575U))))))));
            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)27)) & (((/* implicit */int) var_3)))) | (((/* implicit */int) (unsigned char)162))))) ? (min((arr_24 [i_0 + 3] [i_0] [i_0 + 3] [i_5 - 1]), (-4165202751880750399LL))) : (((/* implicit */long long int) arr_11 [i_5])))))));
            var_25 -= var_4;
        }
    }
    for (unsigned char i_8 = 3; i_8 < 16; i_8 += 2) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned int) var_10);
        var_27 &= ((/* implicit */long long int) arr_11 [i_8]);
        arr_29 [i_8] = ((/* implicit */unsigned int) (~((-((-(((/* implicit */int) (unsigned char)50))))))));
        var_28 = ((/* implicit */unsigned long long int) (((-((-(((/* implicit */int) (unsigned short)49898)))))) - (((/* implicit */int) arr_5 [10U] [i_8 - 2] [i_8 - 3]))));
    }
    for (unsigned char i_9 = 3; i_9 < 16; i_9 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_10 = 2; i_10 < 18; i_10 += 2) 
        {
            for (unsigned char i_11 = 1; i_11 < 17; i_11 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 0; i_12 < 19; i_12 += 3) 
                    {
                        for (long long int i_13 = 0; i_13 < 19; i_13 += 3) 
                        {
                            {
                                arr_41 [i_11] [i_12] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((arr_22 [i_10 - 2] [i_10 + 1] [i_11]) != (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
                                var_29 += ((/* implicit */long long int) (-((~(((/* implicit */int) ((short) var_10)))))));
                            }
                        } 
                    } 
                    var_30 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */int) min((arr_5 [i_10] [i_10] [i_11]), (((/* implicit */short) arr_0 [13LL] [13LL]))))) : (((((/* implicit */_Bool) 7712047956760988500LL)) ? (((/* implicit */int) (unsigned short)3818)) : (((/* implicit */int) (short)-3832))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [13U] [i_10 + 1])))))) : (arr_40 [i_11] [i_10] [i_9] [i_10] [i_9])));
                }
            } 
        } 
        var_31 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 3732665900108959460ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_14 [i_9] [i_9] [i_9])))) ? ((-(3732665900108959477ULL))) : (max((((/* implicit */unsigned long long int) (unsigned short)45835)), (var_1)))))));
        arr_42 [i_9] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) ((0U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 14714078173600592165ULL)))))) : (min((var_7), (((/* implicit */long long int) arr_36 [(short)2] [2U] [i_9])))))) + (9223372036854775807LL))) >> (((/* implicit */int) ((unsigned char) ((var_8) > (((/* implicit */long long int) arr_28 [15U]))))))));
        var_32 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((short) arr_38 [(short)10] [i_9] [i_9] [10U]))) ? (arr_40 [i_9] [(unsigned short)2] [i_9] [i_9 + 2] [0U]) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_12)))))))));
        var_33 = ((/* implicit */long long int) var_2);
    }
    var_34 = ((((/* implicit */_Bool) (short)-21782)) ? (-4090666585754908948LL) : (((/* implicit */long long int) 1974130098U)));
    /* LoopSeq 3 */
    for (unsigned int i_14 = 0; i_14 < 18; i_14 += 2) /* same iter space */
    {
        var_35 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_12)) ? (var_1) : (((/* implicit */unsigned long long int) var_5))))));
        var_36 = ((/* implicit */unsigned int) ((min((((((/* implicit */int) (unsigned char)223)) + (((/* implicit */int) arr_13 [i_14] [i_14])))), (((/* implicit */int) arr_34 [i_14] [i_14] [2ULL])))) >> ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775787LL))) + (35LL)))));
    }
    for (unsigned int i_15 = 0; i_15 < 18; i_15 += 2) /* same iter space */
    {
        var_37 = ((/* implicit */unsigned long long int) (~((+(var_5)))));
        arr_48 [i_15] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_4 [i_15])), (var_2)))) && ((!(((/* implicit */_Bool) min((var_7), (((/* implicit */long long int) var_10)))))))));
    }
    for (unsigned int i_16 = 0; i_16 < 18; i_16 += 2) /* same iter space */
    {
        var_38 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((arr_18 [i_16]), (((/* implicit */long long int) (short)(-32767 - 1)))))) > (((unsigned long long int) var_3))));
        arr_51 [i_16] = ((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)23981)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_50 [i_16]))))), ((+(((/* implicit */int) var_0))))));
        var_39 = arr_19 [i_16];
        /* LoopNest 2 */
        for (long long int i_17 = 0; i_17 < 18; i_17 += 3) 
        {
            for (unsigned short i_18 = 1; i_18 < 17; i_18 += 2) 
            {
                {
                    arr_57 [i_16] [i_17] [i_17] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_8 [i_16] [(short)5] [i_18]))));
                    var_40 = ((/* implicit */long long int) (unsigned short)41575);
                    var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) max((((((/* implicit */_Bool) arr_10 [i_18 + 1] [12U] [(unsigned char)1] [i_18 - 1])) ? (((((/* implicit */long long int) 536870911U)) | (var_9))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (var_6) : (var_6)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [i_16] [i_17] [i_18])) ? ((+(arr_47 [14U]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35268)))))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_19 = 2; i_19 < 14; i_19 += 2) 
                    {
                        var_42 &= ((/* implicit */long long int) arr_32 [i_18]);
                        arr_61 [i_17] = ((/* implicit */short) ((arr_24 [i_19] [i_19 + 4] [i_18 - 1] [i_18]) - (arr_24 [i_19] [i_19 + 1] [i_18 - 1] [(unsigned short)11])));
                    }
                }
            } 
        } 
    }
}
