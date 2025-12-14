/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101621
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
    var_11 = ((/* implicit */short) ((min((min((4691192849427246984LL), (((/* implicit */long long int) (_Bool)0)))), (min((-2796899505060359932LL), (((/* implicit */long long int) var_8)))))) + (((/* implicit */long long int) max(((-(var_10))), (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) == (var_10)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
        var_12 = (((((-(var_5))) + (9223372036854775807LL))) >> (((4691192849427246978LL) - (4691192849427246932LL))));
    }
    for (unsigned short i_1 = 1; i_1 < 9; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */long long int) min((((((/* implicit */_Bool) -7071725539976264434LL)) ? (-1072227053) : (-1567397742))), (((/* implicit */int) max((arr_1 [i_1 - 1]), (arr_1 [i_1 + 2]))))));
        var_13 += ((/* implicit */signed char) max((min((1353880810445266797LL), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) (unsigned short)12359)) : (((/* implicit */int) (unsigned char)161))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_4 [i_1]) << (((((/* implicit */int) var_7)) - (223)))))))))));
        var_14 = ((/* implicit */long long int) min(((+((~(((/* implicit */int) arr_0 [i_1 + 1] [i_1])))))), (((((/* implicit */_Bool) arr_6 [i_1 - 1])) ? (-773252307) : ((~(((/* implicit */int) (_Bool)1))))))));
    }
    for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        var_15 += ((/* implicit */unsigned char) ((int) ((((((/* implicit */int) (signed char)14)) >> (((((/* implicit */int) arr_8 [i_2])) - (193))))) == (((/* implicit */int) min(((signed char)-15), (((/* implicit */signed char) (_Bool)0))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) arr_0 [i_2] [i_3])) : (((/* implicit */int) arr_8 [i_2]))));
            var_17 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_0 [i_2] [i_3]))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_2 [i_2]))))) : (((((/* implicit */int) (unsigned short)39490)) | (var_8)))));
            /* LoopSeq 2 */
            for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
            {
                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-70))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)21)) : (((/* implicit */int) arr_15 [i_2] [i_4])))) : (arr_2 [i_2])));
                arr_16 [i_4] [i_3] [i_3] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_8)))) ? (((((/* implicit */_Bool) var_4)) ? (1353880810445266798LL) : (((/* implicit */long long int) -773252294)))) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1)))))));
                /* LoopSeq 4 */
                for (signed char i_5 = 0; i_5 < 12; i_5 += 4) 
                {
                    arr_19 [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_4])) ? (((/* implicit */int) arr_14 [i_2] [i_2] [i_2] [(unsigned char)7])) : ((-(1296463986)))));
                    var_19 = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) arr_8 [i_3])));
                }
                for (unsigned short i_6 = 0; i_6 < 12; i_6 += 3) 
                {
                    var_20 = ((/* implicit */int) ((2796899505060359935LL) >> (((/* implicit */int) (signed char)38))));
                    arr_22 [i_6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_18 [i_2] [i_3] [i_4]))));
                    var_21 += ((/* implicit */short) (((!((_Bool)1))) || (((/* implicit */_Bool) ((-4691192849427246985LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)53165))))))));
                }
                for (unsigned char i_7 = 3; i_7 < 11; i_7 += 1) 
                {
                    var_22 = ((/* implicit */long long int) arr_20 [i_2] [i_3] [i_4] [i_4] [i_7]);
                    arr_25 [i_3] [i_4] [i_7] = ((/* implicit */unsigned short) -2796899505060359932LL);
                }
                for (long long int i_8 = 0; i_8 < 12; i_8 += 2) 
                {
                    arr_29 [i_2] [i_2] = ((/* implicit */unsigned short) (-(3444386718347352644LL)));
                    var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4] [i_3])) ? (-4691192849427246985LL) : (((/* implicit */long long int) 1839053113))))) ? (((long long int) (signed char)121)) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [(unsigned short)0] [i_4] [i_3] [(unsigned short)0])) ? (((/* implicit */int) arr_12 [i_2] [i_8])) : (arr_2 [i_4])))));
                    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_12 [i_2] [i_3]))));
                    arr_30 [i_2] [i_2] [i_4] [i_8] = ((/* implicit */signed char) ((long long int) (!(((/* implicit */_Bool) var_3)))));
                    var_25 -= ((/* implicit */int) (!(((/* implicit */_Bool) -773252307))));
                }
                var_26 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) (unsigned short)26045)) ? (2796899505060359905LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-98))))));
                arr_31 [i_2] [i_3] [i_4] &= ((arr_27 [i_2] [i_3]) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_2] [i_2]))) : (-835536740101710040LL));
            }
            for (unsigned short i_9 = 0; i_9 < 12; i_9 += 1) 
            {
                var_27 = (-(((/* implicit */int) (unsigned short)33223)));
                var_28 += ((/* implicit */short) (~(arr_17 [i_9] [i_9] [i_9] [i_3] [i_2] [i_2])));
                var_29 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (short)16161))) <= (arr_13 [i_2] [i_3] [i_9] [i_9])));
                arr_34 [i_2] &= ((/* implicit */long long int) ((-130000829) > (((/* implicit */int) (signed char)40))));
            }
            var_30 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [i_3]))));
        }
        var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)128)) ? (7955238128008640898LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
    }
    var_32 = ((long long int) (((!(((/* implicit */_Bool) var_5)))) ? (max((((/* implicit */long long int) (_Bool)1)), (-4691192849427247013LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -2796899505060359889LL)) ? (var_8) : (((/* implicit */int) var_7)))))));
    var_33 = ((/* implicit */_Bool) var_0);
}
