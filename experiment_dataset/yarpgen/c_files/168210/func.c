/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168210
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_14 += ((/* implicit */unsigned short) (short)-24636);
                        arr_10 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) arr_8 [i_0] [i_1] [i_0]))) + (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) (signed char)-71))))))));
                        var_15 *= ((unsigned char) ((long long int) arr_9 [i_3] [i_0] [i_2] [i_0] [i_0]));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 25; i_5 += 2) 
            {
                for (signed char i_6 = 0; i_6 < 25; i_6 += 1) 
                {
                    {
                        var_16 = ((/* implicit */unsigned long long int) arr_12 [i_4] [i_4] [i_6]);
                        arr_18 [(short)2] [i_0] [i_5] [i_4] [i_0] [(signed char)6] = ((/* implicit */long long int) min((var_4), (((/* implicit */unsigned long long int) 1252833494U))));
                        arr_19 [i_0] [i_0] [11ULL] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) max((((/* implicit */long long int) -1969688987)), (arr_4 [i_0] [i_5] [16U]))))) ? (min((((((/* implicit */_Bool) 5714913981037186414LL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_5)))), (((/* implicit */int) arr_7 [i_0] [i_0] [i_5])))) : (max(((-(((/* implicit */int) var_10)))), (((((/* implicit */_Bool) 5714913981037186432LL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_13 [i_0]))))))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_7 = 0; i_7 < 25; i_7 += 3) /* same iter space */
    {
        arr_22 [i_7] = ((/* implicit */signed char) ((_Bool) ((_Bool) 5714913981037186414LL)));
        arr_23 [i_7] [i_7] = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_11 [(signed char)18])), (var_6))))))), (max((((/* implicit */int) var_5)), (((int) 5714913981037186414LL))))));
        arr_24 [i_7] = ((/* implicit */unsigned int) ((((var_8) ^ (arr_4 [i_7] [i_7] [i_7]))) >= (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (~(((/* implicit */int) var_12)))))))));
    }
    for (signed char i_8 = 0; i_8 < 25; i_8 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */_Bool) (((+((+(5791588306328721407LL))))) / (((/* implicit */long long int) (+(((/* implicit */int) var_9)))))));
        var_18 = ((((/* implicit */int) var_3)) >= (((/* implicit */int) (short)-15547)));
        arr_28 [i_8] = ((/* implicit */_Bool) ((long long int) var_5));
    }
    var_19 = ((/* implicit */unsigned short) (+(-7351175191419704676LL)));
    var_20 = ((/* implicit */long long int) ((((5791588306328721413LL) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 7334139804474250065ULL)) || (((/* implicit */_Bool) -1108738535)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_5))))) ? (((((/* implicit */unsigned long long int) -6997829453652671320LL)) & (2305843009213691904ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -6997829453652671320LL)) && (((/* implicit */_Bool) ((2354493033172313950LL) + (-5791588306328721416LL))))))))));
}
