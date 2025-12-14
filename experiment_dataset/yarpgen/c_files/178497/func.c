/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178497
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) max((288230376151711742LL), (var_9)))) : ((+(var_2)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (281474976710656LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_7)))) : (((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? ((~(-2755613310716554044LL))) : (max((((/* implicit */long long int) var_10)), (var_9)))))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)200)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)734))) == (((unsigned long long int) (unsigned char)182))))) : (((/* implicit */int) (signed char)119))));
        arr_2 [5ULL] [i_0] = ((/* implicit */unsigned short) min((arr_1 [i_0]), (((/* implicit */int) ((unsigned short) ((unsigned long long int) var_12))))));
    }
    for (unsigned int i_1 = 2; i_1 < 19; i_1 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1996875524093943549LL)) ? (((unsigned long long int) 144115050636902400ULL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (_Bool)1)) << (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)161)) : (((/* implicit */int) (unsigned char)182)))) - (153))))))))));
        arr_5 [(unsigned short)0] = ((/* implicit */signed char) arr_3 [(signed char)14]);
        arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)17815))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_4 [i_1] [i_1 + 2])))) : (((((/* implicit */_Bool) (unsigned short)28145)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (2822609680U)))))) : ((+(arr_3 [i_1 - 1])))));
    }
    for (signed char i_2 = 3; i_2 < 21; i_2 += 3) 
    {
        var_16 = ((/* implicit */unsigned long long int) (~(arr_8 [i_2 - 3])));
        var_17 = ((/* implicit */_Bool) (~(((/* implicit */int) var_12))));
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_18 &= ((/* implicit */unsigned char) min((((/* implicit */int) ((signed char) min((((/* implicit */unsigned long long int) arr_8 [i_3])), (var_2))))), ((+(((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_3])) && (((/* implicit */_Bool) var_3)))))))));
            var_19 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_11)) / (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))))));
        }
    }
    for (unsigned char i_4 = 2; i_4 < 13; i_4 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_5 = 1; i_5 < 12; i_5 += 2) 
        {
            var_20 = ((/* implicit */signed char) ((unsigned char) var_12));
            /* LoopNest 2 */
            for (signed char i_6 = 0; i_6 < 15; i_6 += 4) 
            {
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                {
                    {
                        arr_25 [i_7] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) arr_10 [i_4] [i_5 + 2] [i_6]);
                        arr_26 [i_4] [i_6] [i_4] = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) var_8))))));
                        arr_27 [i_4] [(_Bool)1] [(short)7] [i_4] = ((/* implicit */int) (((((_Bool)1) ? (((/* implicit */long long int) arr_8 [7LL])) : (var_5))) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)97)))));
                    }
                } 
            } 
            arr_28 [i_4] [i_5] [i_5] = (short)-27023;
        }
        var_21 = ((/* implicit */long long int) arr_12 [i_4]);
        arr_29 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(max((var_9), (((/* implicit */long long int) var_8))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)(-127 - 1)))))) : (max((((/* implicit */unsigned long long int) ((short) 1205038639736968892ULL))), (min((arr_23 [i_4 + 2] [i_4] [i_4] [(signed char)8]), (((/* implicit */unsigned long long int) var_9))))))));
        var_22 = ((/* implicit */long long int) max((var_22), ((((!(((/* implicit */_Bool) ((var_9) >> (((/* implicit */int) arr_12 [(signed char)7]))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3))))))) : ((+((((_Bool)1) ? (-6LL) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))))));
        arr_30 [i_4] [i_4] = ((/* implicit */long long int) max((((/* implicit */int) (!(arr_22 [i_4 - 1] [i_4] [i_4] [i_4])))), (((((/* implicit */_Bool) arr_13 [i_4] [i_4])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_4] [i_4]))))) : ((+(((/* implicit */int) (_Bool)0))))))));
    }
    var_23 = ((/* implicit */_Bool) var_9);
}
