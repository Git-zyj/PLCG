/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182165
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_7 [i_2] [i_1] [i_2] = ((unsigned long long int) min((arr_1 [i_2] [i_0]), (arr_1 [i_0] [i_0])));
                    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) min((((unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_11)) : (-2030633534)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_0] [i_1 - 3])) ? (arr_6 [i_1] [(signed char)6] [i_1 - 1]) : (arr_6 [i_1] [i_0] [i_1 + 2])))))))));
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), ((((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)119))) : (var_6)))))) ? (min((((/* implicit */unsigned long long int) ((var_2) - (var_2)))), (((unsigned long long int) var_10)))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-108))))) ? (min((var_12), (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (-425044894))))))))));
                }
                for (int i_3 = 2; i_3 < 18; i_3 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                    {
                        var_16 = ((/* implicit */long long int) (-(((((/* implicit */int) (signed char)120)) * (((/* implicit */int) (short)31217))))));
                        arr_13 [i_1] [i_3 + 2] [i_1] [i_0] = ((/* implicit */int) min((min((3870780551235809772LL), (((/* implicit */long long int) (unsigned char)153)))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) -766979638)), (-772122498117309828LL)))) ? (((((/* implicit */int) arr_3 [i_4])) ^ (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max((arr_2 [i_0]), ((signed char)107)))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_5 = 4; i_5 < 17; i_5 += 3) 
                        {
                            arr_16 [i_5] [i_4] [i_3 - 1] [i_1] [i_0] [i_0] &= ((/* implicit */unsigned long long int) arr_4 [(_Bool)1] [i_1] [i_1] [i_5]);
                            var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (-(((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0])) ? (arr_15 [i_0] [i_0] [i_3 + 2] [i_3] [i_0] [i_5 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
                            arr_17 [i_1] [i_3] = arr_14 [i_1] [8LL] [i_3 + 1];
                            var_18 *= ((/* implicit */unsigned long long int) var_5);
                        }
                        for (signed char i_6 = 1; i_6 < 18; i_6 += 3) 
                        {
                            var_19 += ((/* implicit */signed char) arr_9 [i_0] [i_0]);
                            arr_20 [i_6 + 2] [i_4] [i_3] [i_1] [i_0] = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) 131068)), (arr_15 [i_1] [i_1 + 1] [i_1] [i_1 + 2] [i_1] [i_1]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((int) arr_6 [i_3] [i_4] [i_4]))) <= ((~(var_2)))))))));
                            var_20 = ((/* implicit */short) ((((/* implicit */long long int) (-(((/* implicit */int) ((var_4) && (((/* implicit */_Bool) arr_11 [i_6] [i_4] [i_0] [i_1] [i_0])))))))) <= ((-(max((-4624379762863305012LL), (((/* implicit */long long int) var_13))))))));
                            var_21 = ((/* implicit */signed char) -1570775419);
                        }
                    }
                    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (unsigned char)25))));
                }
                var_23 = ((/* implicit */signed char) 8249745231589910364LL);
                arr_21 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) (short)6553)))) ? (((long long int) arr_6 [i_1] [i_1] [(signed char)4])) : (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_3 [i_0])), (var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_8), (arr_11 [i_0] [i_0] [i_1] [i_1] [(_Bool)1]))))) : (arr_12 [i_0] [i_0] [i_1] [i_1])))));
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 20; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 4; i_8 < 19; i_8 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (((((+(((/* implicit */int) var_0)))) > ((~(((/* implicit */int) arr_2 [i_0])))))) ? (arr_14 [i_1] [i_7] [i_1]) : (((unsigned long long int) var_4)))))));
                            arr_28 [i_8] [i_7] [i_1 - 2] [i_0] = ((/* implicit */signed char) min((arr_12 [i_8] [(signed char)11] [i_0] [i_0]), (((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)-16)) && (((/* implicit */_Bool) (signed char)(-127 - 1))))) ? (((((/* implicit */_Bool) arr_3 [i_1 - 4])) ? (((/* implicit */int) arr_23 [i_0] [i_1] [i_7] [i_7])) : (((/* implicit */int) (unsigned char)11)))) : ((+(((/* implicit */int) (signed char)32)))))))));
                            arr_29 [i_0] [i_0] [4ULL] [i_0] [(signed char)15] [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_22 [i_1] [i_1] [i_1 - 1])) ? (((/* implicit */int) arr_27 [i_0] [(signed char)18] [i_1 + 1] [i_8 - 1])) : (((/* implicit */int) (signed char)32)))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_27 [i_1] [i_1] [i_1 - 4] [i_7])) : (((/* implicit */int) (_Bool)1))))));
                            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (-(((((/* implicit */_Bool) -1396419796)) ? (((((/* implicit */_Bool) -1806606617664491464LL)) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) (signed char)81)))) : (((/* implicit */int) (signed char)4)))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_9 = 0; i_9 < 20; i_9 += 1) 
                {
                    for (unsigned char i_10 = 2; i_10 < 19; i_10 += 1) 
                    {
                        {
                            arr_36 [i_0] [i_0] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((signed char) min((((/* implicit */int) (!((_Bool)0)))), (((int) -1041819160)))));
                            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_1])) ? (((/* implicit */int) (signed char)82)) : (((/* implicit */int) var_5))))), (min((8050559555285974731ULL), (((/* implicit */unsigned long long int) (signed char)-71))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) min((((/* implicit */short) arr_8 [i_0] [i_1 - 3] [17ULL] [i_10])), ((short)19333)))) : (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (signed char)28))))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-15816)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)255))))) : (5312382056306783393ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19333)))));
}
