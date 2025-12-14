/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15792
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) != (3108117791U)));
        var_10 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_6), (var_0)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 539735953U))))) : (((/* implicit */int) var_3))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)168)) % (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_9))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            arr_6 [i_1] [i_0] = (unsigned char)57;
            var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), ((signed char)127))))))) ? (((((/* implicit */_Bool) (~(1272968305U)))) ? (min((arr_1 [(unsigned char)6]), (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1272968291U)))))))) : (min((11090194918210288375ULL), (((/* implicit */unsigned long long int) (-(539735971U)))))))))));
        }
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_12 -= ((/* implicit */signed char) min((((/* implicit */unsigned int) var_3)), ((((~(7U))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)194)) && (((/* implicit */_Bool) var_7))))))))));
        arr_9 [i_2] = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-115))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_2]))))))), (((/* implicit */unsigned long long int) var_4))));
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            arr_14 [i_3] [i_3] = ((/* implicit */unsigned int) (_Bool)0);
            /* LoopSeq 3 */
            for (signed char i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
            {
                var_13 |= ((/* implicit */_Bool) var_2);
                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_1 [i_5]))))));
            }
            for (signed char i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
            {
                var_15 = ((/* implicit */unsigned char) var_2);
                arr_20 [i_6] [i_3] [i_6] = ((/* implicit */unsigned int) var_3);
                arr_21 [i_3] [i_3] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)0))));
                var_16 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)176))));
            }
            for (signed char i_7 = 0; i_7 < 11; i_7 += 4) /* same iter space */
            {
                arr_25 [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) var_1)) <= (((((/* implicit */int) var_1)) - (((/* implicit */int) (_Bool)0))))));
                arr_26 [i_7] [i_3] [(unsigned char)10] = ((/* implicit */unsigned long long int) (-(var_6)));
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (539735954U) : (((/* implicit */unsigned int) var_6)))))));
                var_18 = ((/* implicit */int) min((var_18), (((arr_11 [i_7]) ? (arr_22 [i_7] [i_4] [i_7] [i_7]) : (((/* implicit */int) arr_5 [i_3] [i_4]))))));
                arr_27 [i_3] [i_3] [i_7] = ((/* implicit */signed char) (-(((/* implicit */int) var_7))));
            }
        }
        /* LoopSeq 3 */
        for (signed char i_8 = 0; i_8 < 11; i_8 += 2) 
        {
            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) var_8))));
            var_20 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))));
        }
        for (signed char i_9 = 4; i_9 < 10; i_9 += 1) 
        {
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) 539735964U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_9 - 4] [i_9 - 4]))) : (7356549155499263259ULL)));
            var_22 = ((/* implicit */_Bool) (~(arr_13 [i_9 - 2])));
        }
        for (unsigned int i_10 = 0; i_10 < 11; i_10 += 3) 
        {
            arr_34 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) ^ (((unsigned long long int) var_6))));
            var_23 *= ((/* implicit */signed char) (-(((/* implicit */int) var_1))));
            var_24 -= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_23 [i_3] [i_3]))));
        }
        /* LoopSeq 3 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
        {
            var_25 += ((((/* implicit */_Bool) (((-2147483647 - 1)) % (((/* implicit */int) var_7))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)255)));
            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) 11090194918210288375ULL))));
            var_27 = ((/* implicit */unsigned char) (-((~(((/* implicit */int) var_8))))));
            arr_37 [i_3] [i_3] = ((((/* implicit */_Bool) (unsigned char)176)) ? (((/* implicit */long long int) -12)) : (var_2));
            arr_38 [i_3] [i_11] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : ((~(((/* implicit */int) var_9))))));
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
        {
            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) var_4))));
            var_29 = ((/* implicit */int) (signed char)-124);
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
        {
            arr_45 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) arr_8 [i_3])) : (((/* implicit */int) (signed char)119))));
            var_30 = ((/* implicit */signed char) (-(((/* implicit */int) arr_12 [i_3] [i_13] [i_3]))));
            arr_46 [i_3] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) var_7))));
        }
        arr_47 [i_3] = ((/* implicit */unsigned char) var_3);
        arr_48 [i_3] = ((/* implicit */_Bool) (~(2570950063U)));
    }
    var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) var_9))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_14 = 1; i_14 < 15; i_14 += 4) /* same iter space */
    {
        var_32 = ((/* implicit */int) var_4);
        arr_52 [i_14] = ((/* implicit */unsigned int) (+(((7356549155499263242ULL) % (((/* implicit */unsigned long long int) var_2))))));
        var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) (~(((/* implicit */int) var_7)))))));
    }
    for (unsigned long long int i_15 = 1; i_15 < 15; i_15 += 4) /* same iter space */
    {
        var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) ((((((/* implicit */int) (unsigned char)176)) >= (((/* implicit */int) var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_51 [i_15] [i_15 - 1]) >= (((/* implicit */unsigned int) var_6)))))) : (max((((/* implicit */unsigned long long int) (~(var_2)))), (min((arr_54 [i_15]), (((/* implicit */unsigned long long int) (signed char)-33)))))))))));
        var_35 = ((/* implicit */int) (signed char)116);
    }
    for (unsigned long long int i_16 = 1; i_16 < 15; i_16 += 4) /* same iter space */
    {
        arr_57 [12] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? ((+(7356549155499263252ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_1), (var_9)))))));
        var_36 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (signed char)32)) ? (2) : (var_6))), (((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) arr_53 [i_16 + 1] [i_16 - 1]))))));
        arr_58 [i_16 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(3021998967U)))) ? (((int) arr_55 [i_16 + 1])) : (min((((/* implicit */int) (signed char)119)), ((-(((/* implicit */int) (signed char)7))))))));
    }
    /* LoopSeq 3 */
    for (unsigned char i_17 = 0; i_17 < 22; i_17 += 3) 
    {
        var_37 += ((/* implicit */signed char) (~(((((/* implicit */_Bool) (-(7356549155499263249ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (max((3021998973U), (((/* implicit */unsigned int) -25))))))));
        var_38 |= ((/* implicit */unsigned char) max(((-(((((/* implicit */_Bool) 3021998990U)) ? (((/* implicit */int) (short)-8913)) : (((/* implicit */int) (signed char)48)))))), (((/* implicit */int) arr_60 [i_17]))));
    }
    for (unsigned char i_18 = 4; i_18 < 21; i_18 += 1) 
    {
        arr_64 [i_18] = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */_Bool) (signed char)127)) && (arr_63 [i_18 - 1])))), ((+(var_6)))));
        arr_65 [i_18 + 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (((_Bool)1) ? (var_0) : (((/* implicit */int) (signed char)48)))))));
        arr_66 [i_18 + 1] = ((/* implicit */signed char) (-((~(24)))));
    }
    for (int i_19 = 0; i_19 < 11; i_19 += 2) 
    {
        arr_69 [i_19] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) % (((/* implicit */int) arr_49 [i_19]))))), (max((18446744073709551607ULL), (var_5)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_20 = 0; i_20 < 11; i_20 += 4) 
        {
            arr_72 [i_19] [i_19] [i_19] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (signed char)60)))) ? (((/* implicit */int) arr_28 [i_19] [i_20] [i_20])) : (((/* implicit */int) var_1))));
            var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) + (31)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_43 [i_19] [i_20])) : (((/* implicit */int) (signed char)126)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-32747)) : (((/* implicit */int) var_4))))));
            var_40 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
            arr_73 [i_19] = ((/* implicit */signed char) (~(arr_33 [i_19] [i_19] [i_19])));
            arr_74 [i_20] [i_19] = ((/* implicit */long long int) var_8);
        }
        for (unsigned int i_21 = 0; i_21 < 11; i_21 += 4) 
        {
            var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) max(((-(-2113457290))), (((/* implicit */int) (signed char)48)))))));
            var_42 = ((/* implicit */unsigned char) (-(max((var_2), (((/* implicit */long long int) 6U))))));
            arr_79 [i_19] [i_21] = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_12 [i_21] [i_21] [i_21])))) & (((/* implicit */int) max((var_9), (min((arr_29 [(_Bool)1] [i_19]), (((/* implicit */unsigned char) var_4)))))))));
            var_43 &= ((/* implicit */unsigned char) 4294967283U);
        }
        arr_80 [i_19] [i_19] = ((/* implicit */unsigned char) ((signed char) max((var_0), (((/* implicit */int) (signed char)127)))));
    }
    var_44 = ((/* implicit */unsigned char) min((var_44), (((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)28)))))));
}
