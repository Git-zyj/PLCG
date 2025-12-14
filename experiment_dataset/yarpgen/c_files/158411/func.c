/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158411
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(3364291409U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_1 [(signed char)3])) ^ (3364291409U))))))) : ((+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (arr_1 [i_0])))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [6ULL])) ? (arr_0 [i_0]) : (-1827349135)))) ? (max((arr_1 [i_0]), (((/* implicit */int) var_12)))) : ((-(((/* implicit */int) var_15))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) (unsigned char)139);
    }
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */long long int) max(((unsigned char)117), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)20504))))))))));
        arr_7 [i_1] = ((/* implicit */long long int) (unsigned short)26977);
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_2]))));
        /* LoopSeq 3 */
        for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            var_19 = ((/* implicit */unsigned short) ((((((/* implicit */int) (short)-18812)) + (2147483647))) >> (((((/* implicit */int) var_15)) + (122)))));
            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_3])) ? (((((/* implicit */int) var_0)) * (((/* implicit */int) var_15)))) : ((+(((/* implicit */int) var_11)))))))));
            arr_13 [i_2] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 930675862U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2]))) : (arr_11 [17LL] [(_Bool)1])))));
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (930675906U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2] [(unsigned short)4] [i_2])))));
        }
        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 4) 
        {
            var_22 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (1275000355) : (((/* implicit */int) var_4))))));
            var_23 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_15 [i_2] [i_4])) ? (((/* implicit */int) arr_5 [i_4])) : (((/* implicit */int) var_12))))));
        }
        for (int i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_5) | (var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5812))) : (var_1)));
            var_25 = (~(arr_8 [i_5]));
            var_26 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) -8808039563369661213LL)) ? (arr_20 [(unsigned short)17] [i_2] [i_5]) : (((/* implicit */int) (unsigned char)202))));
        }
        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */int) (short)20504)) | (((/* implicit */int) (short)25168)))) : (((/* implicit */int) (unsigned short)27005))));
    }
    var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)43833)) % (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) 74076283)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)26987))) : (var_5))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))) ? (((/* implicit */int) var_2)) : ((~((-(((/* implicit */int) var_15))))))));
    /* LoopNest 3 */
    for (signed char i_6 = 4; i_6 < 8; i_6 += 4) 
    {
        for (unsigned int i_7 = 0; i_7 < 12; i_7 += 3) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    var_29 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_6] [i_6] [8LL] [i_8]))) : (arr_18 [i_8])))) ? (((/* implicit */int) arr_26 [i_6 + 4])) : (((var_2) ? (arr_20 [(unsigned char)12] [(unsigned char)12] [i_8]) : (1275000385)))))) * (((((((/* implicit */_Bool) 9508654527209633818ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43833))) : (34359738367ULL))) >> (((min((var_16), (((/* implicit */int) arr_12 [i_8] [i_6 - 1] [i_8])))) + (351309361)))))));
                    arr_31 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_7))))))))) < (max((((((/* implicit */_Bool) 930675888U)) ? (1228917690406789812LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_7])) ? (((/* implicit */int) (_Bool)1)) : (arr_29 [i_6 + 2] [i_8]))))))));
                    arr_32 [i_8] [i_6] [i_7] [i_8] = ((/* implicit */signed char) min((((/* implicit */long long int) min((((((/* implicit */int) arr_30 [(unsigned short)4] [i_8] [i_7] [i_6])) * (((/* implicit */int) arr_15 [i_8] [2])))), (((((/* implicit */_Bool) arr_24 [(signed char)9] [(unsigned short)0] [i_6])) ? (488128273) : (((/* implicit */int) (_Bool)1))))))), (((((/* implicit */_Bool) (+(var_3)))) ? (min((((/* implicit */long long int) var_9)), (1228917690406789812LL))) : (((/* implicit */long long int) (-(((/* implicit */int) var_14)))))))));
                    arr_33 [i_8] [i_6] [i_6] [2U] |= ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) (signed char)31))) * (((/* implicit */int) (signed char)-20))));
                }
            } 
        } 
    } 
    var_30 ^= ((/* implicit */long long int) (unsigned short)57455);
}
