/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127752
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
    var_18 = (((!(((/* implicit */_Bool) var_14)))) ? (max((max((2701959748889684268ULL), (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))))) : (((/* implicit */unsigned long long int) var_6)));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_19 += ((/* implicit */_Bool) arr_1 [i_0 + 1] [2]);
        arr_3 [13ULL] [i_0] = ((/* implicit */int) max((((/* implicit */short) ((_Bool) arr_1 [i_0] [i_0]))), (var_2)));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */short) ((signed char) ((unsigned long long int) 70368744177663ULL)));
            var_21 = ((short) arr_5 [i_0 + 1] [i_0]);
        }
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) /* same iter space */
        {
            var_22 -= ((/* implicit */short) ((unsigned long long int) arr_4 [6U]));
            var_23 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1] [(signed char)6]))) < (arr_2 [(short)6])));
            var_24 = ((/* implicit */_Bool) var_8);
        }
    }
    for (unsigned long long int i_3 = 1; i_3 < 6; i_3 += 4) 
    {
        var_25 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_1 [i_3] [4ULL]))))) ? (((/* implicit */int) min((((/* implicit */short) var_10)), (var_2)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_3 + 3] [(unsigned char)5])) && (((/* implicit */_Bool) arr_8 [i_3] [(unsigned short)8] [i_3 + 1])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_8 [i_3] [4U] [i_3]), (((/* implicit */unsigned char) (_Bool)1))))) ^ (((/* implicit */int) arr_8 [(_Bool)1] [10U] [i_3]))))) : ((~(((var_4) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [6U])))))))));
        arr_11 [i_3] = arr_4 [8ULL];
    }
    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 2) 
    {
        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((_Bool) var_13)) ? (min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (2538844980U)))), ((~(arr_2 [i_4]))))) : (((unsigned long long int) var_12)))))));
        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) 2691873372U)) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_4] [i_4])) | (arr_13 [i_4])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [10ULL] [i_4] [i_4]))) : ((-(6499658376697128376ULL))))) : (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(unsigned char)12] [i_4] [i_4]))) : (arr_5 [i_4] [i_4])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_5 = 0; i_5 < 14; i_5 += 2) 
        {
            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2538844980U)) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) var_16))));
            arr_17 [i_5] [i_4] |= ((/* implicit */signed char) (~(((unsigned long long int) var_17))));
            var_29 *= ((/* implicit */unsigned int) var_11);
        }
        var_30 = ((/* implicit */signed char) var_4);
        arr_18 [i_4] [i_4] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_12))));
    }
    for (unsigned long long int i_6 = 1; i_6 < 11; i_6 += 3) 
    {
        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (min((min((9488459735491842175ULL), (((/* implicit */unsigned long long int) arr_19 [i_6] [i_6])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2477292836097623596ULL)) ? (((/* implicit */int) arr_1 [(_Bool)1] [i_6])) : (((/* implicit */int) arr_8 [i_6] [i_6] [i_6]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_8 [i_6] [i_6] [i_6]))))))));
        arr_21 [11ULL] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? (arr_5 [i_6] [i_6]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) arr_14 [i_6]))))))));
        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_16)) + (((/* implicit */int) arr_0 [i_6] [i_6 - 1])))) >> (((((/* implicit */_Bool) 6812350109281024637ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)27))) : (2259494024U)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)12397)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_20 [i_6]))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_13)), (636829529U)))) : (((((/* implicit */_Bool) arr_1 [i_6 - 1] [i_6])) ? (((/* implicit */unsigned long long int) 4294967295U)) : (var_17))))) : (8958284338217709426ULL)));
        var_33 = ((/* implicit */short) ((unsigned int) arr_14 [i_6]));
    }
    var_34 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((unsigned long long int) ((unsigned short) (short)16189))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-60)) ? (var_6) : (((/* implicit */int) min(((unsigned char)0), (((/* implicit */unsigned char) (signed char)34))))))))));
}
