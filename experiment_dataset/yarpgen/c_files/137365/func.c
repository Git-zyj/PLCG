/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137365
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
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_18 ^= ((((/* implicit */_Bool) min((min((((/* implicit */long long int) arr_0 [(signed char)8])), (var_14))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_1 [(unsigned short)2] [i_0])) >= (var_13))))))) ? (((/* implicit */long long int) var_4)) : (max((-173958639442545236LL), (-173958639442545222LL))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (int i_1 = 2; i_1 < 7; i_1 += 1) /* same iter space */
        {
            arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-32))) : (arr_1 [i_0] [i_1 - 2])));
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((-173958639442545236LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)78))))))));
                        arr_10 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */short) (~(((/* implicit */int) arr_6 [i_0] [i_1 - 1] [i_0]))));
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)100)) > (((/* implicit */int) ((signed char) 0)))));
                    }
                } 
            } 
            arr_12 [4] [4] [4] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 + 1] [(_Bool)1])) ? (((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)177))) : (arr_1 [(_Bool)0] [(_Bool)0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            arr_13 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-111))) <= (0U))))));
            var_20 = ((/* implicit */unsigned int) (~(var_9)));
        }
        for (int i_4 = 2; i_4 < 7; i_4 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned int i_5 = 0; i_5 < 11; i_5 += 3) 
            {
                for (int i_6 = 0; i_6 < 11; i_6 += 4) 
                {
                    for (short i_7 = 0; i_7 < 11; i_7 += 1) 
                    {
                        {
                            arr_25 [i_0] [i_4] [i_5] [i_6] [4] [i_6] &= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) 0)) == (arr_0 [i_6])))) >> (max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0] [i_0] [i_6]))) > (var_14)))), ((~(((/* implicit */int) arr_5 [i_6] [i_4] [i_5] [i_5]))))))));
                            var_21 = ((((/* implicit */long long int) min((arr_21 [i_4 + 1] [i_4 + 3]), (arr_21 [i_4 - 1] [i_4 - 1])))) & (min((((/* implicit */long long int) arr_24 [i_4 + 4] [(unsigned short)3] [9LL])), (((var_16) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
                            var_22 = ((/* implicit */unsigned short) max((0), (((/* implicit */int) (unsigned char)0))));
                            var_23 = ((/* implicit */int) ((((((((/* implicit */_Bool) var_11)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) 0)))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 16383U)) && ((_Bool)0))))))) + (((/* implicit */unsigned int) (+(((/* implicit */int) arr_8 [i_4 - 2] [4] [2] [i_4 + 3] [8] [i_4 - 2])))))));
                            var_24 = ((/* implicit */short) (-(((/* implicit */int) ((((var_13) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0] [8LL] [i_5] [(unsigned char)6] [i_7]))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 4055946300544542166ULL)))))))));
                        }
                    } 
                } 
            } 
            var_25 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) var_10)) < (((((/* implicit */_Bool) ((-1925979848) - (((/* implicit */int) (unsigned char)152))))) ? (min((arr_22 [(signed char)0] [i_4] [(signed char)0] [i_4] [(signed char)6] [10U]), (((/* implicit */long long int) arr_9 [(_Bool)1] [i_4] [i_4] [i_4] [(signed char)3] [2U])))) : (((/* implicit */long long int) ((((/* implicit */int) arr_2 [3U] [3U])) - (((/* implicit */int) arr_8 [i_0] [(_Bool)1] [(unsigned short)2] [i_4] [i_0] [i_0])))))))));
            var_26 = ((/* implicit */unsigned short) (~(max((((/* implicit */long long int) 183807735U)), (var_5)))));
            arr_26 [i_0] [i_0] = ((/* implicit */int) arr_9 [i_0] [i_0] [i_4] [(unsigned short)7] [i_4] [(unsigned short)7]);
            arr_27 [i_0] = ((/* implicit */_Bool) min((arr_24 [i_0] [i_0] [i_0]), (((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (_Bool)1)))))));
        }
        for (unsigned char i_8 = 0; i_8 < 11; i_8 += 1) /* same iter space */
        {
            arr_30 [i_0] = arr_18 [i_0] [i_8] [i_0];
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_9 = 0; i_9 < 11; i_9 += 3) 
            {
                var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0)) ? (((unsigned int) arr_22 [i_0] [(unsigned char)8] [(unsigned char)8] [i_9] [(unsigned char)8] [i_9])) : ((-(13U)))));
                arr_34 [i_0] [8LL] [i_8] [i_0] = ((/* implicit */signed char) ((unsigned int) (~(((/* implicit */int) (unsigned short)2)))));
                arr_35 [(unsigned short)0] &= ((((/* implicit */long long int) 1044798107U)) | (-7190418721216582969LL));
                var_28 ^= ((/* implicit */unsigned short) (~((+(arr_22 [(_Bool)1] [(_Bool)1] [i_8] [i_9] [i_9] [i_9])))));
                var_29 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)0))) != (4111159567U))))));
            }
        }
        for (unsigned char i_10 = 0; i_10 < 11; i_10 += 1) /* same iter space */
        {
            arr_39 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)91))) % (arr_22 [i_0] [i_10] [i_10] [i_10] [2] [i_10]))) % (((arr_15 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)171)) && (((/* implicit */_Bool) (signed char)-97))))), ((unsigned char)152)))) : (0)));
            var_30 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((arr_36 [i_0] [i_0] [i_0]), (-1021798214)))) < (var_2)))), (arr_14 [i_0] [i_0])));
            var_31 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1936927759342028787LL)) ? (3202275389U) : (183807735U)))) | (min((((/* implicit */unsigned long long int) (signed char)-3)), (494430541487507426ULL)))));
            /* LoopSeq 1 */
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((int) arr_32 [i_11 - 1] [i_11 - 1] [i_11 - 1])))));
                var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_32 [i_0] [(_Bool)1] [9LL]), (min((((/* implicit */int) arr_29 [i_0] [i_10] [i_11 - 1])), (arr_7 [i_0] [i_0] [i_0] [i_10] [(unsigned char)10])))))) ? (arr_17 [(unsigned char)3] [6U] [6U] [i_11 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [(_Bool)1] [i_10] [(_Bool)1]))))))));
                var_34 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) 3250169189U)) : (arr_40 [6U] [6U] [7ULL]))) >> (((((((/* implicit */int) arr_29 [8U] [i_10] [i_11 - 1])) + (2147483647))) >> (((arr_40 [i_0] [i_10] [i_11 - 1]) - (4553526213245549311LL))))))))));
            }
        }
        var_35 = ((/* implicit */unsigned short) min(((+(-548234954))), (((/* implicit */int) ((((((/* implicit */unsigned long long int) 1823013166)) | (7846887586305751499ULL))) < (((/* implicit */unsigned long long int) arr_36 [10U] [i_0] [i_0])))))));
    }
    for (unsigned int i_12 = 2; i_12 < 24; i_12 += 4) 
    {
        arr_45 [i_12 + 1] [i_12 - 2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_42 [i_12 - 2]), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)127)) && (((/* implicit */_Bool) var_3))))))))) & (((((/* implicit */_Bool) arr_42 [i_12 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_12 - 2] [i_12]))) : (arr_43 [i_12 - 1] [i_12 - 2])))));
        arr_46 [i_12] [i_12] = ((/* implicit */unsigned char) (((-(min((5396446383407747152ULL), (((/* implicit */unsigned long long int) arr_44 [i_12 + 1] [i_12])))))) == (((/* implicit */unsigned long long int) min(((~(-679794267))), (((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */int) (signed char)17)))))))));
        var_36 = ((/* implicit */unsigned char) (((((_Bool)0) && ((_Bool)0))) ? (((/* implicit */int) (unsigned char)91)) : (((/* implicit */int) (short)-29587))));
    }
    /* vectorizable */
    for (long long int i_13 = 1; i_13 < 21; i_13 += 1) 
    {
        var_37 ^= ((/* implicit */signed char) arr_48 [16LL] [i_13]);
        var_38 = ((/* implicit */unsigned long long int) 6726826691280793062LL);
        var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 5185049470952039287ULL)) || (((/* implicit */_Bool) arr_43 [i_13] [i_13])))))));
    }
    var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) min((0LL), (((/* implicit */long long int) (_Bool)1)))))));
}
