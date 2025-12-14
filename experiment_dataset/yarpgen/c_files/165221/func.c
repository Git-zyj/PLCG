/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165221
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
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned short)17710))))))) ? (((/* implicit */int) var_4)) : ((-(((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1))))))));
    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (_Bool)1))));
    var_15 = (+(((/* implicit */int) (_Bool)1)));
    var_16 = ((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) var_9)) : ((~(((/* implicit */int) (_Bool)1))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            arr_4 [i_0] [i_0] = min((((/* implicit */int) (_Bool)1)), ((+((-(((/* implicit */int) arr_0 [i_1])))))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                for (int i_3 = 4; i_3 < 16; i_3 += 3) 
                {
                    {
                        arr_10 [i_3] [i_0] [i_2] [i_0] [i_0 - 1] = ((/* implicit */unsigned long long int) (_Bool)1);
                        var_17 ^= (_Bool)1;
                    }
                } 
            } 
            var_18 = (+(-1162019084761130078LL));
        }
        for (unsigned char i_4 = 1; i_4 < 18; i_4 += 3) 
        {
            var_19 = ((/* implicit */long long int) ((((arr_7 [i_0] [i_0 + 3]) ? (((/* implicit */int) arr_7 [i_0] [i_0 - 2])) : (((/* implicit */int) arr_7 [i_0] [i_0 - 1])))) >> (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_0 - 1])) >= (((/* implicit */int) var_7)))))));
            /* LoopSeq 1 */
            for (unsigned char i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                var_20 = ((/* implicit */_Bool) (+((((!(var_0))) ? (((((/* implicit */int) arr_11 [i_5] [i_4])) >> (((/* implicit */int) arr_5 [i_0] [i_0] [i_5])))) : (((/* implicit */int) min((var_8), (var_12))))))));
                var_21 = var_10;
                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0 + 3]))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))));
                var_23 ^= ((/* implicit */int) (_Bool)1);
                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (~(max((max((((/* implicit */int) var_11)), ((-2147483647 - 1)))), (-1638828726))))))));
            }
            /* LoopSeq 2 */
            for (unsigned char i_6 = 0; i_6 < 19; i_6 += 3) /* same iter space */
            {
                arr_18 [i_0] [i_0] = ((/* implicit */unsigned short) max(((-((-(((/* implicit */int) arr_7 [i_0] [(_Bool)1])))))), (((/* implicit */int) var_2))));
                arr_19 [i_0] [i_0] = ((/* implicit */unsigned short) max(((+((-(((/* implicit */int) arr_1 [i_0] [i_0])))))), (((var_7) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (!((_Bool)1))))))));
                /* LoopSeq 1 */
                for (unsigned char i_7 = 3; i_7 < 18; i_7 += 3) 
                {
                    var_25 ^= arr_7 [(unsigned short)10] [(unsigned short)10];
                    arr_22 [(unsigned short)12] [(_Bool)0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((1162019084761130056LL), (((/* implicit */long long int) min((var_2), (arr_5 [i_0] [4] [i_0]))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_12 [i_0]))))) : (var_6)));
                }
            }
            /* vectorizable */
            for (unsigned char i_8 = 0; i_8 < 19; i_8 += 3) /* same iter space */
            {
                var_26 ^= var_4;
                var_27 = ((/* implicit */_Bool) (-((+(((/* implicit */int) (_Bool)1))))));
            }
        }
        /* LoopSeq 4 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            arr_29 [i_0] [i_0 + 3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((-(((/* implicit */int) (unsigned short)23924)))), (((/* implicit */int) var_0))))) ? ((-(((/* implicit */int) (unsigned char)172)))) : ((+(max((-2147483622), (((/* implicit */int) var_5))))))));
            /* LoopSeq 2 */
            for (long long int i_10 = 0; i_10 < 19; i_10 += 3) 
            {
                arr_34 [i_0] [i_0] [i_10] = ((/* implicit */unsigned long long int) (+(min((((/* implicit */int) var_11)), (((((/* implicit */int) var_0)) & (((/* implicit */int) (signed char)3))))))));
                arr_35 [i_0] [i_0] [i_10] [i_10] = var_8;
                arr_36 [i_0] [i_9] [i_0] = ((/* implicit */long long int) (_Bool)1);
                arr_37 [i_0] [i_9] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? ((((_Bool)0) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_23 [(unsigned short)17] [i_9])))) : (((((/* implicit */_Bool) 2147483622)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)0)))))), ((+(((/* implicit */int) arr_7 [i_0] [i_0]))))));
                arr_38 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7887067127832310116LL)) ? (((/* implicit */int) arr_23 [i_0 + 2] [i_0 + 1])) : (((/* implicit */int) (_Bool)1))))) ? ((~(((/* implicit */int) var_0)))) : (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))));
            }
            /* vectorizable */
            for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 3) 
            {
                var_28 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
                arr_41 [5] [i_0] [(unsigned char)15] = ((/* implicit */unsigned char) (+(-2147483622)));
                /* LoopSeq 2 */
                for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 3) 
                {
                    arr_46 [i_0 + 1] [i_9] [i_0] [i_0 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0 + 3] [i_11] [i_11])) ? (arr_3 [i_11] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) + (((/* implicit */int) (_Bool)1)))))));
                    var_29 = ((/* implicit */unsigned long long int) (_Bool)0);
                }
                for (unsigned long long int i_13 = 4; i_13 < 18; i_13 += 3) 
                {
                    var_30 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_4)))) < (((((/* implicit */int) arr_5 [i_0] [i_11] [i_0])) ^ (((/* implicit */int) (unsigned char)240))))));
                    arr_51 [i_0] [i_11] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)130))))) ? (2147483647) : (((/* implicit */int) (_Bool)1))));
                }
            }
        }
        for (unsigned char i_14 = 0; i_14 < 19; i_14 += 3) 
        {
            var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) min(((~(((/* implicit */int) (unsigned char)16)))), ((~(((/* implicit */int) ((1162019084761130056LL) < (-16197807928775400LL)))))))))));
            arr_55 [i_0] [i_0] = ((/* implicit */_Bool) (unsigned char)108);
            /* LoopNest 3 */
            for (unsigned long long int i_15 = 0; i_15 < 19; i_15 += 3) 
            {
                for (long long int i_16 = 0; i_16 < 19; i_16 += 3) 
                {
                    for (long long int i_17 = 0; i_17 < 19; i_17 += 3) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) 2147483620))))), (((((/* implicit */_Bool) arr_60 [i_0] [(signed char)5] [i_15] [i_16] [i_17])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [i_0]))) >= (arr_3 [i_14] [i_0 + 3])))) : (((/* implicit */int) var_12))))));
                            arr_65 [i_0] = ((/* implicit */int) ((((/* implicit */long long int) min(((~(((/* implicit */int) (unsigned char)16)))), (((/* implicit */int) (unsigned char)240))))) != ((((~(9018237303379400317LL))) - ((+(arr_42 [i_16] [i_0])))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_18 = 0; i_18 < 19; i_18 += 3) 
        {
            var_33 = (~(((/* implicit */int) arr_45 [(_Bool)1] [i_18] [i_0 + 1] [i_0 - 1])));
            arr_70 [i_0] [i_0] = ((/* implicit */unsigned short) ((arr_7 [i_0] [i_0 - 2]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_43 [i_0] [i_0 + 3] [i_0] [i_0] [(signed char)10] [i_0 + 1]))));
        }
        for (unsigned char i_19 = 3; i_19 < 17; i_19 += 3) 
        {
            var_34 = ((/* implicit */int) arr_58 [i_0]);
            var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_73 [i_0] [(_Bool)1] [i_0 + 1])))) ? (((((/* implicit */_Bool) arr_60 [i_0] [i_0] [(_Bool)1] [i_0] [i_0 + 3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_60 [(_Bool)1] [0LL] [(_Bool)1] [5] [i_0 - 1])))) : (max((arr_73 [i_0] [8] [i_0 - 1]), (((/* implicit */int) (unsigned char)255)))))))));
        }
    }
}
