/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104581
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
    var_14 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) / (var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((unsigned long long int) (((_Bool)1) ? (var_13) : (var_8))))));
    var_15 = ((/* implicit */long long int) min((((/* implicit */short) (_Bool)1)), ((short)-3848)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                arr_4 [i_1 + 1] = ((/* implicit */_Bool) (~((~(var_6)))));
                var_16 = ((/* implicit */_Bool) arr_3 [i_0] [i_0]);
                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))), (var_10))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) var_7);
    /* LoopSeq 3 */
    for (unsigned long long int i_2 = 4; i_2 < 17; i_2 += 3) 
    {
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15249819512942102635ULL)) ? (((/* implicit */int) arr_5 [i_2 - 2])) : (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((unsigned char) var_7)))))) : (((((var_10) <= (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) ? ((~(2689050809U))) : ((~(arr_3 [i_2] [i_2])))))));
        var_20 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) / (((/* implicit */int) var_2))))) : ((-(var_12))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2]))))))));
        var_21 = ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned short)65534)));
    }
    for (short i_3 = 0; i_3 < 23; i_3 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) /* same iter space */
        {
            arr_13 [i_4] = ((/* implicit */short) var_2);
            arr_14 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_12 [(unsigned char)16] [13ULL])), ((-(7870054U)))))) ? (max((((((/* implicit */_Bool) arr_11 [i_3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_10))), (((/* implicit */unsigned int) arr_8 [i_3])))) : (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)54510)) : (((/* implicit */int) var_2)))))))));
            var_22 = ((/* implicit */unsigned char) (+(((((/* implicit */int) (unsigned char)6)) >> (((-831218619) + (831218633)))))));
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-100)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_3])) ? (1036773342U) : (var_10)))) : (arr_9 [i_4])))) ? (((((/* implicit */int) var_9)) + (((/* implicit */int) (short)-3844)))) : (((((/* implicit */int) (signed char)-89)) & (((((/* implicit */int) var_3)) << (((arr_11 [i_3] [6U]) - (2108049171U)))))))));
            var_24 = ((/* implicit */int) (-(((((var_13) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) / (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
        }
        for (unsigned char i_5 = 0; i_5 < 23; i_5 += 1) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned int) arr_7 [i_3] [i_3]);
            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-89)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3]))) : (var_0)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_11 [i_5] [i_3]))))));
            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) 3061259702U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)3848)))))));
        }
        var_28 = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) * ((+(arr_7 [i_3] [i_3]))));
        var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((((_Bool) ((((/* implicit */_Bool) 3061259695U)) ? (((/* implicit */int) var_1)) : (arr_12 [i_3] [(_Bool)1])))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) (-(var_8)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_3] [i_3] [i_3])) ? (arr_12 [i_3] [i_3]) : (((/* implicit */int) var_9))))) : ((+(var_6))))))))));
        var_30 = ((/* implicit */_Bool) ((var_10) ^ (((/* implicit */unsigned int) ((arr_12 [i_3] [i_3]) % (arr_12 [i_3] [i_3]))))));
    }
    for (int i_6 = 0; i_6 < 20; i_6 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 20; i_7 += 4) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_9 = 3; i_9 < 19; i_9 += 3) 
                    {
                        arr_27 [i_6] [16LL] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (signed char)65)) : (((/* implicit */int) (_Bool)1))));
                        var_31 ^= (!(((/* implicit */_Bool) max((((/* implicit */long long int) (+(((/* implicit */int) arr_8 [i_8]))))), (min((((/* implicit */long long int) var_2)), (-2854465547238571681LL)))))));
                        var_32 = ((/* implicit */int) ((max((max((var_10), (((/* implicit */unsigned int) var_4)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) || (var_1)))))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 20; i_10 += 2) 
                    {
                        var_33 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? ((-(max((var_10), (((/* implicit */unsigned int) (short)3)))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) (signed char)-89))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_11 = 0; i_11 < 20; i_11 += 3) 
                        {
                            arr_33 [i_7] [i_8] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_19 [i_6] [i_7]), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)3844))) & (3861765944U))))))) ? ((+((+(var_10))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                            var_34 = ((/* implicit */unsigned short) arr_7 [i_11] [i_7]);
                            var_35 = ((/* implicit */short) ((((/* implicit */_Bool) 4194303)) || (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)47121)))))));
                        }
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 20; i_12 += 1) 
                    {
                        arr_36 [i_6] = ((/* implicit */int) (+(var_13)));
                        arr_37 [i_6] [i_6] [i_8] [19U] = ((/* implicit */long long int) var_7);
                        arr_38 [i_6] [(short)8] [i_6] [i_12] [i_6] = ((/* implicit */unsigned int) arr_34 [i_6] [(short)8] [i_6] [i_6] [i_12] [i_12]);
                    }
                    var_36 = ((/* implicit */short) max((((/* implicit */unsigned int) arr_23 [i_6] [i_7] [(_Bool)1] [i_8])), (arr_25 [i_6] [i_6] [i_6] [i_7] [i_6])));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_13 = 0; i_13 < 20; i_13 += 1) 
        {
            for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
            {
                {
                    arr_44 [i_6] = ((/* implicit */int) var_5);
                    arr_45 [i_6] [i_6] [i_13] [i_6] = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)162))))) > (((((/* implicit */long long int) ((/* implicit */int) var_9))) / (283726776524341248LL))))))) == (((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_13])) & (((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) : (((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */long long int) var_0)))))));
                }
            } 
        } 
        var_37 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_24 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))) ? ((+(((/* implicit */int) arr_24 [i_6] [i_6] [i_6] [i_6] [14LL] [i_6])))) : ((-(((/* implicit */int) arr_28 [i_6] [i_6] [i_6] [i_6]))))));
    }
}
