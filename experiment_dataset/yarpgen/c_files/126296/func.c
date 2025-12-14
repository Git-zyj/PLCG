/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126296
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
    var_17 = ((/* implicit */signed char) ((((unsigned long long int) min((((/* implicit */unsigned long long int) (_Bool)1)), (18329783830295948308ULL)))) - (((((/* implicit */_Bool) 666483207)) ? (116960243413603299ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)113)))))));
    var_18 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) != (var_7)));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = arr_0 [i_0];
        arr_5 [(_Bool)0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 2147483647)) + (((((15119915154333501538ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-66))))) >> (((var_16) + (7260764500347240762LL)))))));
        var_19 += ((/* implicit */signed char) ((unsigned long long int) ((signed char) ((((/* implicit */unsigned long long int) 360154120)) * (var_8)))));
        arr_6 [(_Bool)1] &= ((/* implicit */unsigned long long int) ((((arr_2 [i_0]) << (((arr_2 [i_0]) - (782895789))))) & (((arr_2 [i_0]) & (((/* implicit */int) var_15))))));
        arr_7 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) % (arr_0 [i_0])))))) || (((/* implicit */_Bool) ((((_Bool) (_Bool)1)) ? (((/* implicit */unsigned long long int) max((arr_1 [i_0]), (((/* implicit */long long int) (unsigned short)7832))))) : (var_13))))));
    }
    for (int i_1 = 0; i_1 < 11; i_1 += 1) /* same iter space */
    {
        var_20 = min((arr_8 [i_1] [i_1]), (((/* implicit */unsigned long long int) ((long long int) var_9))));
        var_21 = ((/* implicit */_Bool) arr_8 [i_1] [i_1]);
        arr_10 [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_2)) / (arr_9 [i_1]))))));
        arr_11 [i_1] = ((/* implicit */signed char) arr_2 [i_1]);
    }
    for (int i_2 = 0; i_2 < 11; i_2 += 1) /* same iter space */
    {
        var_22 += var_7;
        var_23 += ((/* implicit */_Bool) min((arr_9 [2ULL]), (((/* implicit */int) ((((/* implicit */int) (signed char)56)) > (((/* implicit */int) (unsigned short)7847)))))));
        var_24 = ((/* implicit */signed char) var_4);
    }
    for (int i_3 = 0; i_3 < 11; i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 11; i_5 += 4) 
            {
                for (unsigned long long int i_6 = 4; i_6 < 8; i_6 += 4) 
                {
                    {
                        var_25 &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) arr_21 [i_6 + 1] [i_6] [i_6 + 3] [i_6 + 3])))));
                        var_26 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) ((arr_0 [i_5]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_3])))))) && (((/* implicit */_Bool) arr_9 [i_6]))))) == (((/* implicit */int) (!(((/* implicit */_Bool) -870158238)))))));
                        arr_24 [0ULL] = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) arr_21 [i_6 - 3] [i_6 - 2] [i_6 + 1] [i_6 - 1])), (arr_19 [i_3]))) + (arr_12 [i_3] [i_3])));
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [1LL] [i_4]))))) << (((var_13) - (2472068956069884091ULL)))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_7 = 0; i_7 < 11; i_7 += 1) 
        {
            for (int i_8 = 1; i_8 < 9; i_8 += 1) 
            {
                {
                    var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [(_Bool)1] [7ULL])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_16)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_9), (arr_14 [i_3]))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) arr_28 [i_3] [i_3])) : (var_4)))))))))));
                    arr_30 [1] [i_7] [(unsigned short)9] = ((/* implicit */unsigned long long int) arr_16 [i_3] [i_3]);
                    arr_31 [i_3] [5] [i_3] = ((/* implicit */int) arr_26 [i_3]);
                }
            } 
        } 
        var_29 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -8689020666929287861LL)) && (((/* implicit */_Bool) -1557853621))));
        /* LoopSeq 2 */
        for (unsigned long long int i_9 = 2; i_9 < 8; i_9 += 4) /* same iter space */
        {
            var_30 = ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52516))) + (10286187613178123108ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_28 [i_3] [10ULL])))))));
            arr_34 [i_3] &= ((/* implicit */short) (!(((/* implicit */_Bool) arr_18 [(signed char)4] [(signed char)4]))));
        }
        for (unsigned long long int i_10 = 2; i_10 < 8; i_10 += 4) /* same iter space */
        {
            var_31 = arr_35 [i_3] [i_3] [i_3];
            var_32 = ((unsigned long long int) (~(arr_22 [5ULL] [i_10 + 1] [i_10 - 1] [i_10 + 2])));
            arr_38 [i_3] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_3 [(signed char)4])), (((long long int) ((signed char) var_12)))));
        }
    }
}
