/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175638
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
    var_14 += ((/* implicit */long long int) var_12);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        var_15 ^= ((/* implicit */short) ((((((/* implicit */int) arr_1 [i_0 - 1])) + (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) >= (var_8)))))) >> (((min((arr_0 [i_0] [i_0 - 1]), (((/* implicit */long long int) arr_1 [i_0])))) + (7514924051260049543LL)))));
        var_16 = (+(min((((/* implicit */long long int) max((arr_1 [i_0]), (arr_1 [i_0 + 1])))), (min((arr_0 [i_0 + 1] [i_0]), (((/* implicit */long long int) var_5)))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    {
                        var_17 = ((/* implicit */unsigned char) arr_2 [i_0] [i_0 + 2]);
                        var_18 *= ((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (short)25611))))) < (arr_6 [i_3])));
                        arr_11 [i_3] [i_0] [i_2] [i_1 + 1] [i_0] [i_0] = ((/* implicit */short) (+((+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) < (arr_0 [i_0] [i_1 + 2]))))))));
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            var_19 |= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_10 [i_4] [i_3] [i_2] [i_1 - 1] [i_0] [6U])) > (((/* implicit */int) arr_3 [i_2] [i_1]))))) > (((/* implicit */int) arr_2 [i_0] [i_1 + 1]))))) < (((/* implicit */int) arr_3 [i_4] [i_3]))));
                            var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) / (((/* implicit */int) min((arr_3 [i_1] [i_1]), (((/* implicit */unsigned char) var_1)))))))) % (min((((arr_13 [i_4] [i_2] [i_2] [i_1] [i_0]) << (((arr_8 [i_0] [(unsigned char)10] [i_2] [i_3] [i_0] [(_Bool)1]) + (292063200))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) var_10)))))))));
                            var_21 ^= ((/* implicit */unsigned int) arr_3 [i_2] [i_1]);
                            var_22 = ((/* implicit */unsigned char) min((min(((~(((/* implicit */int) arr_2 [i_3] [i_2])))), (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_0] [(signed char)9])) <= (arr_8 [i_0 + 2] [(unsigned short)4] [i_2] [(unsigned short)4] [i_4] [i_4])))))), (((/* implicit */int) max((arr_3 [i_1 + 2] [(unsigned short)18]), (arr_3 [i_1 + 1] [i_1]))))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 19; i_5 += 2) 
                        {
                            var_23 = ((/* implicit */_Bool) min((min((((/* implicit */unsigned short) min((((/* implicit */signed char) arr_2 [i_1 + 2] [i_1 + 2])), (var_9)))), (min((((/* implicit */unsigned short) var_1)), (var_12))))), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (var_10))))) > (max((arr_16 [i_5] [i_5] [i_5] [i_5] [(unsigned short)1] [18LL] [i_5]), (((/* implicit */long long int) arr_12 [i_0 + 1] [i_1] [i_2] [(_Bool)1] [i_5])))))))));
                            var_24 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((var_11) % (((/* implicit */long long int) ((/* implicit */int) var_10)))))) % (min((arr_4 [i_0] [i_1] [i_2] [8LL]), (((/* implicit */unsigned long long int) arr_8 [i_5] [i_5] [(unsigned short)1] [i_5] [i_5] [i_5])))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 3) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 19; i_8 += 3) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_25 += ((/* implicit */unsigned int) ((((((min((((/* implicit */long long int) var_0)), (var_11))) + (((/* implicit */long long int) (~(((/* implicit */int) var_10))))))) + (9223372036854775807LL))) >> ((((+((~(var_2))))) - (13833803747591235129ULL)))));
                                arr_30 [i_7] [(_Bool)1] [(signed char)9] [i_8] [(signed char)9] [i_9] = ((/* implicit */long long int) ((((/* implicit */int) ((arr_13 [i_0 - 1] [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_0 - 1]) >= (arr_13 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 2])))) >> (((((((/* implicit */unsigned long long int) arr_20 [i_9] [i_0 + 1] [i_0 + 1])) & (arr_13 [i_0 + 2] [i_0 - 1] [i_0 + 2] [i_0 - 1] [i_0 - 1]))) - (2379064367658566655ULL)))));
                                arr_31 [i_7] = ((/* implicit */short) (~(min((((/* implicit */long long int) min((var_13), (((/* implicit */unsigned short) arr_5 [i_0 - 1] [i_6] [i_7]))))), (min((arr_23 [i_8] [i_7] [i_6] [i_0]), (((/* implicit */long long int) var_5))))))));
                                var_26 += ((/* implicit */long long int) var_5);
                            }
                        } 
                    } 
                    arr_32 [(unsigned char)17] [i_7] [(unsigned char)17] [(unsigned char)17] = ((/* implicit */long long int) min((((((/* implicit */int) arr_17 [i_0] [i_0 + 2] [i_0] [i_0 + 1] [i_6] [i_7])) + (arr_8 [(unsigned short)17] [i_0] [i_0 + 2] [i_0 - 1] [i_7] [i_7]))), (((/* implicit */int) ((arr_8 [i_0] [i_0] [i_0 + 1] [i_0 + 2] [i_7] [i_7]) < (((/* implicit */int) arr_17 [(unsigned short)9] [i_0] [i_0] [i_0 - 1] [i_6] [i_7])))))));
                    var_27 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((((/* implicit */int) var_1)), (arr_27 [i_0 - 1] [i_0 - 1] [i_7] [(signed char)16] [i_0 + 2])))), (arr_9 [i_0 + 2] [i_0 + 2])));
                    arr_33 [(unsigned short)10] |= ((/* implicit */unsigned char) max(((-(arr_23 [i_0] [i_6] [i_6] [(unsigned short)5]))), (((/* implicit */long long int) ((((/* implicit */int) var_3)) >> (((arr_21 [i_0 - 1] [i_0] [i_0]) + (2758346099356316739LL))))))));
                }
            } 
        } 
    }
    var_28 = ((/* implicit */int) max((((((((/* implicit */long long int) ((/* implicit */int) (short)24235))) / (-6111614970462346078LL))) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65533))))), (((/* implicit */long long int) min((var_3), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) == (var_2)))))))));
}
