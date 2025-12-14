/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123964
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
    var_20 = ((/* implicit */int) max((var_6), (((/* implicit */long long int) -1073741824))));
    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((unsigned short)12), (((/* implicit */unsigned short) (unsigned char)2))))) ? (((((/* implicit */_Bool) (unsigned char)2)) ? (((((/* implicit */_Bool) var_13)) ? (-2544198665106804393LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)2))))) : (var_13))) : (((/* implicit */long long int) 1073741824)))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) /* same iter space */
    {
        var_22 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) min((((/* implicit */long long int) (unsigned short)25302)), (-4039997705616348115LL))))) ? (((((/* implicit */_Bool) ((unsigned long long int) var_9))) ? ((-(165062859254532207ULL))) : (((/* implicit */unsigned long long int) arr_0 [i_0])))) : ((+(min((((/* implicit */unsigned long long int) arr_0 [i_0])), (0ULL)))))));
        var_23 -= ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) 1073741823)) ? (var_6) : (((/* implicit */long long int) 1073741812)))) | (((/* implicit */long long int) arr_1 [i_0])))), (((((/* implicit */_Bool) min((4039997705616348117LL), (((/* implicit */long long int) arr_1 [i_0]))))) ? (min((-4039997705616348115LL), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_7))))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */int) (unsigned short)39791))))))) ? (((/* implicit */int) max((var_8), (var_8)))) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
    }
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)-59)), (14112696702588990977ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) : (((unsigned long long int) arr_3 [i_1]))))))));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            for (unsigned char i_3 = 1; i_3 < 8; i_3 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        arr_14 [(signed char)7] [i_2] [i_2] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_2] [i_4]))) | (min((-620823152808765400LL), (((/* implicit */long long int) var_1))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((3809099625U), (((/* implicit */unsigned int) (-2147483647 - 1))))))))) : (((/* implicit */int) ((min((arr_9 [i_1] [(signed char)4] [9LL]), (1073741824))) >= (((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) arr_10 [i_1] [6] [i_3])) : (((/* implicit */int) (unsigned char)0)))))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 3) 
                        {
                            arr_19 [(unsigned char)4] [i_4] [i_2] [i_4 + 1] [i_5] [(signed char)1] = ((/* implicit */_Bool) (~(4039997705616348115LL)));
                            var_25 = ((/* implicit */long long int) ((_Bool) min(((signed char)-7), (arr_6 [i_4 + 1] [i_2]))));
                        }
                        for (unsigned long long int i_6 = 4; i_6 < 10; i_6 += 4) /* same iter space */
                        {
                            var_26 = ((((/* implicit */_Bool) (unsigned char)77)) || (((/* implicit */_Bool) 2147483647)));
                            arr_22 [i_4] [3LL] [i_3] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_6 + 1] [i_6] [(signed char)0] [i_6 - 2] [i_4 + 1] [i_3 + 1])) ? (5957592536599954670LL) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_6 + 1] [i_6] [i_6 - 1] [i_6 - 3] [i_4 + 1] [i_3 + 3])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_2] [i_4])) | (134328241)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (unsigned char)59)) : (((/* implicit */int) (unsigned char)59))))))))) : (min((arr_20 [i_1] [i_2] [6U] [i_4 + 1] [i_6]), (((/* implicit */unsigned long long int) (unsigned short)10172))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_7 = 4; i_7 < 10; i_7 += 4) /* same iter space */
                        {
                            var_27 = ((((/* implicit */_Bool) arr_17 [i_4 + 1] [i_4] [i_4 + 1] [i_7] [i_7])) ? (arr_17 [i_4 + 1] [i_4] [i_4] [i_4] [i_4]) : (((/* implicit */unsigned int) arr_9 [i_3] [i_4 + 1] [i_7 - 2])));
                            var_28 = ((/* implicit */unsigned short) ((short) (+(((/* implicit */int) (_Bool)1)))));
                        }
                        arr_25 [i_4 + 1] [i_2] [i_3 + 3] [i_4] [i_4] = ((/* implicit */unsigned long long int) (signed char)-55);
                        arr_26 [i_1] [i_4] [i_4] [i_1] = ((/* implicit */short) max((((((/* implicit */_Bool) min((((/* implicit */long long int) arr_1 [(short)4])), (arr_18 [i_1] [i_2] [i_3] [i_2])))) ? (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_20 [(unsigned short)1] [i_2] [(unsigned char)3] [(unsigned char)1] [i_4]))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_18)), (arr_11 [i_4] [(signed char)1] [i_2] [i_4] [i_4])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7561789637210326937ULL)) && (((/* implicit */_Bool) arr_24 [(short)6] [i_4 + 1] [i_4 + 1] [(unsigned short)1] [i_4 + 1])))))));
                    }
                    var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_20 [i_3 + 1] [i_3] [i_3 + 3] [i_3 + 2] [i_3]) + (((/* implicit */unsigned long long int) arr_17 [(unsigned char)8] [i_2] [i_3 + 2] [i_3] [i_3 + 2]))))) ? (((((/* implicit */_Bool) arr_20 [i_1] [4ULL] [i_3 - 1] [1ULL] [i_3 - 1])) ? (((/* implicit */int) arr_8 [i_3] [i_3] [i_3 - 1])) : (((/* implicit */int) var_9)))) : (((((/* implicit */int) (unsigned short)8484)) + (((/* implicit */int) (_Bool)1)))))))));
                    var_30 = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) min((arr_23 [i_3] [i_2] [(signed char)6] [i_2]), ((_Bool)1)))))), (((((/* implicit */_Bool) 2487103973U)) ? (((/* implicit */int) min(((unsigned short)22207), (((/* implicit */unsigned short) arr_21 [i_2] [i_3 + 2]))))) : (((/* implicit */int) (_Bool)1))))));
                    arr_27 [i_1] [i_1] = ((/* implicit */unsigned long long int) (((+(min((((/* implicit */unsigned int) arr_8 [i_1] [(unsigned char)3] [i_3 + 3])), (1807863322U))))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_3 + 2] [i_3 - 1] [1U] [i_3] [1] [i_3 + 2])) ? (((/* implicit */int) arr_16 [i_3 + 1] [i_3] [i_3] [i_3] [i_3 + 3] [i_3 + 2])) : (((/* implicit */int) arr_5 [i_3 + 3])))))));
                }
            } 
        } 
        arr_28 [i_1] = ((/* implicit */unsigned char) (+(min((min((((/* implicit */int) (unsigned char)255)), (-32768))), (((((/* implicit */int) (unsigned char)183)) ^ (((/* implicit */int) arr_12 [(short)4] [i_1]))))))));
        arr_29 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) -5133283141840981331LL))) ? (((((/* implicit */_Bool) arr_24 [i_1] [(short)3] [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-7853092085163326660LL))) : (arr_24 [i_1] [i_1] [i_1] [i_1] [i_1])));
        arr_30 [i_1] = ((/* implicit */short) min((((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)33)) + (((/* implicit */int) arr_3 [i_1]))))) * (max((2700731413052023717ULL), (((/* implicit */unsigned long long int) (unsigned char)11)))))), (((/* implicit */unsigned long long int) ((unsigned char) ((_Bool) arr_3 [i_1]))))));
    }
    /* vectorizable */
    for (unsigned int i_8 = 0; i_8 < 11; i_8 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (short i_10 = 1; i_10 < 10; i_10 += 3) 
            {
                {
                    arr_41 [i_8] [i_8] = ((/* implicit */unsigned char) (+(arr_1 [i_10 + 1])));
                    arr_42 [i_8] = ((/* implicit */unsigned char) (!(var_2)));
                }
            } 
        } 
        arr_43 [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((unsigned long long int) (_Bool)1)) : (((((/* implicit */_Bool) (short)23773)) ? (((/* implicit */unsigned long long int) -6611303736970632854LL)) : (15561395172595711206ULL)))));
    }
    var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_13)))) ? (max((-1073741842), (((/* implicit */int) (unsigned short)10022)))) : (((/* implicit */int) var_15))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_12))) + (6611303736970632854LL)))) ? (max((1807863306U), (((/* implicit */unsigned int) var_11)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_17))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)59)), (max((var_8), (((/* implicit */unsigned short) (unsigned char)126))))))))));
    var_32 -= ((/* implicit */signed char) min((((/* implicit */long long int) var_9)), (((((/* implicit */_Bool) (unsigned char)146)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65525))) : (-6599804986218308856LL)))));
}
