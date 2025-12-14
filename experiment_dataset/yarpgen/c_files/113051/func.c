/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113051
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
    var_16 = ((/* implicit */short) max((((((/* implicit */_Bool) (signed char)65)) ? (((/* implicit */int) (signed char)77)) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)32755)) : (((/* implicit */int) (signed char)-117)))))), (min((((/* implicit */int) var_2)), (((((/* implicit */int) (short)0)) | (((/* implicit */int) (short)-32753))))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 3; i_0 < 20; i_0 += 4) /* same iter space */
    {
        arr_2 [(short)12] = ((/* implicit */signed char) max((min((max((((/* implicit */short) var_1)), ((short)-10))), ((short)-13812))), ((short)32767)));
        var_17 = ((/* implicit */short) (+(((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_1 [i_0] [i_0])))) - (((/* implicit */int) max(((short)32750), ((short)0))))))));
        arr_3 [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */int) (short)32755)) - (((/* implicit */int) (signed char)-43))))) ? (((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */int) (signed char)-118)) : (((/* implicit */int) (short)32767)))) : (((/* implicit */int) min(((signed char)127), (var_15)))))), (((((/* implicit */int) min((((/* implicit */short) (signed char)127)), (arr_1 [i_0] [i_0])))) % ((+(((/* implicit */int) (short)32767))))))));
    }
    /* vectorizable */
    for (signed char i_1 = 3; i_1 < 20; i_1 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) (signed char)109))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)3968)) : (((/* implicit */int) arr_1 [i_1] [i_1])))) : (((/* implicit */int) arr_0 [i_1])))))));
        arr_8 [(signed char)5] = ((/* implicit */short) ((((/* implicit */_Bool) (short)3)) && (((/* implicit */_Bool) var_6))));
    }
    for (signed char i_2 = 3; i_2 < 20; i_2 += 4) /* same iter space */
    {
        /* LoopSeq 4 */
        for (short i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            arr_13 [i_2] = ((/* implicit */signed char) max((((/* implicit */short) ((signed char) arr_4 [(short)14] [i_3]))), (min((var_4), (((/* implicit */short) arr_4 [i_2 + 2] [i_2 + 1]))))));
            var_19 += ((/* implicit */signed char) (~(((/* implicit */int) (short)24969))));
            var_20 ^= ((/* implicit */short) ((((((/* implicit */int) ((signed char) (short)0))) >= (((((/* implicit */int) (signed char)16)) * (((/* implicit */int) arr_10 [i_3])))))) || (((/* implicit */_Bool) ((short) min(((short)10), (((/* implicit */short) (signed char)0))))))));
            var_21 += (signed char)127;
            /* LoopSeq 1 */
            for (short i_4 = 1; i_4 < 21; i_4 += 3) 
            {
                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (-(((/* implicit */int) min((((((/* implicit */int) (short)23320)) > (((/* implicit */int) (signed char)-108)))), ((!(((/* implicit */_Bool) var_3))))))))))));
                var_23 += ((/* implicit */signed char) ((short) var_4));
            }
        }
        for (signed char i_5 = 1; i_5 < 20; i_5 += 1) 
        {
            var_24 ^= ((/* implicit */short) max(((+(((/* implicit */int) (short)17685)))), (((((/* implicit */int) arr_15 [i_2] [i_2] [(signed char)14] [i_2])) + (((/* implicit */int) arr_14 [i_5] [i_2] [i_2]))))));
            /* LoopNest 2 */
            for (signed char i_6 = 0; i_6 < 22; i_6 += 1) 
            {
                for (short i_7 = 0; i_7 < 22; i_7 += 4) 
                {
                    {
                        var_25 += ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */short) arr_9 [i_7])), ((short)0)))) || (((/* implicit */_Bool) max((((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-85))))), (min(((short)4094), (((/* implicit */short) arr_20 [i_2] [i_7])))))))));
                        var_26 ^= ((/* implicit */short) min((((((/* implicit */int) var_7)) / (((/* implicit */int) arr_21 [i_2] [i_2])))), (((/* implicit */int) var_12))));
                        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) max((((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-118)) ? (((/* implicit */int) (short)-32764)) : (((/* implicit */int) (short)-28)))) <= (((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)32758))))))), (((((/* implicit */_Bool) max((arr_7 [i_5] [i_2]), (var_10)))) ? (((/* implicit */int) (short)32767)) : (((((/* implicit */_Bool) (signed char)-71)) ? (((/* implicit */int) (short)17674)) : (((/* implicit */int) var_15)))))))))));
                        arr_24 [i_2] [(short)4] [i_6] [i_6] = ((/* implicit */signed char) max(((~(((/* implicit */int) max((((/* implicit */short) var_1)), (arr_1 [i_6] [i_5])))))), (((/* implicit */int) ((((((/* implicit */_Bool) arr_19 [i_2] [i_2] [i_2])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_14 [i_7] [i_7] [i_7])))) < (((/* implicit */int) max((arr_11 [i_2]), ((short)-32764)))))))));
                    }
                } 
            } 
            var_28 = ((/* implicit */short) max((var_28), ((short)-11)));
        }
        for (short i_8 = 0; i_8 < 22; i_8 += 2) 
        {
            arr_28 [i_2] [i_8] [(signed char)7] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) max(((short)28672), (((/* implicit */short) var_10))))) <= (((/* implicit */int) (signed char)-68)))))));
            var_29 += ((/* implicit */signed char) max(((+(((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) arr_27 [i_8] [i_8])) : (((/* implicit */int) var_7)))))), (((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_15)))) ? (((/* implicit */int) arr_0 [i_8])) : (((/* implicit */int) ((signed char) (signed char)127)))))));
        }
        for (short i_9 = 0; i_9 < 22; i_9 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_10 = 0; i_10 < 22; i_10 += 3) 
            {
                for (signed char i_11 = 1; i_11 < 21; i_11 += 3) 
                {
                    {
                        var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_26 [(signed char)0])))))))))));
                        var_31 += ((/* implicit */short) ((signed char) min(((~(((/* implicit */int) (short)32767)))), (((/* implicit */int) arr_19 [(signed char)6] [(signed char)6] [i_10])))));
                    }
                } 
            } 
            arr_35 [i_2] [i_2] = ((/* implicit */short) max(((-(((/* implicit */int) max(((signed char)3), ((signed char)127)))))), (((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_10 [i_2]))))))));
        }
        var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */int) (short)-32747)) - (((/* implicit */int) (short)32748)))))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-24829)) : (((/* implicit */int) arr_19 [i_2] [i_2 - 1] [(signed char)1])))))) : (max(((+(((/* implicit */int) (signed char)-125)))), (((/* implicit */int) ((((/* implicit */int) arr_33 [i_2] [i_2] [i_2] [(short)11])) != (((/* implicit */int) (signed char)-122)))))))));
    }
    for (signed char i_12 = 3; i_12 < 20; i_12 += 4) /* same iter space */
    {
        var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) max(((signed char)127), (var_14))))) ? ((+(((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) (signed char)12))))))) : (((/* implicit */int) max(((short)-32740), ((short)32767))))));
        var_34 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((max(((short)-32755), (arr_19 [(short)6] [i_12] [i_12]))), (min((((/* implicit */short) arr_22 [(signed char)12] [i_12] [i_12] [(signed char)12])), (arr_34 [i_12] [i_12] [i_12] [i_12])))))) ? (max(((-(((/* implicit */int) arr_19 [(short)4] [(short)4] [(short)16])))), (((/* implicit */int) min((var_2), ((signed char)44)))))) : (((/* implicit */int) min((((/* implicit */short) (signed char)12)), ((short)-32743))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_13 = 0; i_13 < 22; i_13 += 3) 
        {
            arr_41 [i_12] [i_12] = ((/* implicit */signed char) ((((/* implicit */int) arr_39 [i_12] [i_12 + 2] [i_12 - 3])) <= (((/* implicit */int) var_6))));
            var_35 = ((/* implicit */short) (((-(((/* implicit */int) (signed char)31)))) == (((/* implicit */int) (signed char)-45))));
        }
    }
}
