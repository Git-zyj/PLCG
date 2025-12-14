/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112916
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1])) ? (arr_0 [i_0 + 1] [i_0 + 1]) : (arr_0 [i_0 + 1] [i_0 + 1])))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (long long int i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            arr_6 [i_1] [i_1] = ((arr_3 [i_0 + 1] [(short)18] [(unsigned short)13]) / (arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 1]));
            arr_7 [i_0] [i_1] = ((/* implicit */short) var_12);
            arr_8 [i_1] [(unsigned char)6] = ((/* implicit */unsigned short) var_4);
            arr_9 [5] [i_1] = ((/* implicit */unsigned int) arr_2 [i_0] [i_1]);
        }
        for (long long int i_2 = 2; i_2 < 18; i_2 += 2) 
        {
            arr_13 [i_2] [i_2] [i_0] = ((/* implicit */long long int) arr_4 [i_2] [i_0]);
            var_18 |= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2] [i_2])) ? (var_16) : (((/* implicit */int) var_2))))) || (((((/* implicit */_Bool) arr_0 [i_2 - 1] [i_0])) || (((/* implicit */_Bool) var_9)))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)7)) * (((/* implicit */int) var_10))))) ? (max((-1592781453), (((/* implicit */int) (unsigned char)84)))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [i_0] [i_2])), (arr_11 [i_0]))))))));
            arr_14 [(unsigned short)17] [(_Bool)1] [(unsigned short)17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (arr_3 [i_0] [i_2] [i_2])))) ? (((/* implicit */int) arr_10 [i_2 + 1] [i_2])) : (((int) var_5))))) ? (1592781453) : ((~((~(1642837304)))))));
            var_19 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_10 [(signed char)12] [i_0])) ? (((((/* implicit */_Bool) -1592781453)) ? (4289029031U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)4))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_0] [i_2]))))))) > (((/* implicit */unsigned int) (-(((/* implicit */int) arr_11 [i_2 - 2])))))));
        }
        for (signed char i_3 = 4; i_3 < 16; i_3 += 2) /* same iter space */
        {
            var_20 = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)21493)) ? (((/* implicit */int) var_10)) : (1592781458)))), ((+(3416738809594512009ULL))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_16)), (var_11)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_12 [i_0] [i_0])))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) 1592781446)) : (arr_17 [i_3] [i_0] [i_0]))))))));
            arr_18 [i_0] |= ((/* implicit */long long int) (((~(-1592781453))) | ((~((-(((/* implicit */int) arr_4 [i_0] [17U]))))))));
        }
        for (signed char i_4 = 4; i_4 < 16; i_4 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned short) min((((unsigned char) (signed char)79)), (((/* implicit */unsigned char) (signed char)-3))));
            var_22 = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 + 1] [i_4 + 2])))))) >= (var_0));
            var_23 = ((/* implicit */unsigned char) ((((int) ((((/* implicit */int) (signed char)10)) & (((/* implicit */int) (unsigned char)107))))) < (((/* implicit */int) var_4))));
        }
        arr_21 [i_0] = ((/* implicit */short) (signed char)-2);
        arr_22 [i_0] |= ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)148)) | (73772440)))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) + (1545317370U))))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_6 = 0; i_6 < 25; i_6 += 4) 
        {
            var_24 |= (-(-9149464420291933217LL));
            arr_27 [13LL] [i_6] = ((/* implicit */signed char) ((min(((_Bool)1), ((_Bool)0))) ? (((/* implicit */int) ((_Bool) ((var_3) + (((/* implicit */int) (unsigned char)2)))))) : (min(((+(((/* implicit */int) arr_23 [i_5])))), ((~(((/* implicit */int) var_1))))))));
            arr_28 [i_5] = ((/* implicit */_Bool) (+(max((((/* implicit */int) ((unsigned short) var_11))), ((+(((/* implicit */int) var_2))))))));
        }
        for (unsigned short i_7 = 0; i_7 < 25; i_7 += 4) 
        {
            arr_32 [i_5] [i_5] [i_5] = min(((+(((((/* implicit */int) arr_26 [15])) - (((/* implicit */int) arr_29 [i_7])))))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_5])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)0))))) || ((_Bool)1)))));
            /* LoopNest 3 */
            for (short i_8 = 1; i_8 < 24; i_8 += 2) 
            {
                for (unsigned char i_9 = 1; i_9 < 22; i_9 += 1) 
                {
                    for (long long int i_10 = 0; i_10 < 25; i_10 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (-(-1592781454)))) ? (((/* implicit */int) max(((_Bool)0), (arr_35 [i_9 - 1] [i_9 - 1] [i_9 + 1] [i_9 - 1])))) : (((/* implicit */int) ((_Bool) arr_35 [i_9 - 1] [i_9] [i_9 + 1] [i_9])))));
                            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-7)) | (((/* implicit */int) arr_25 [(unsigned char)24] [i_7] [i_8 + 1]))));
                            var_27 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_1))) - (552092964529091300LL))))) % (((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned short)12105)))))))));
                        }
                    } 
                } 
            } 
            var_28 = ((/* implicit */unsigned char) min((var_28), (((unsigned char) ((unsigned short) arr_25 [i_7] [i_5] [i_5])))));
        }
        /* LoopSeq 4 */
        for (int i_11 = 0; i_11 < 25; i_11 += 2) 
        {
            var_29 = ((((/* implicit */_Bool) ((int) max((var_7), (((/* implicit */unsigned short) arr_25 [i_5] [i_5] [i_5])))))) ? (((/* implicit */int) arr_24 [i_5])) : (((/* implicit */int) arr_26 [i_11])));
            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)56270)) ? (4289029031U) : (((/* implicit */unsigned int) 763211715))));
            var_31 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) && (((/* implicit */_Bool) max((arr_40 [i_5] [i_11]), (((/* implicit */unsigned long long int) (unsigned short)9313)))))));
        }
        for (unsigned short i_12 = 1; i_12 < 23; i_12 += 4) 
        {
            /* LoopNest 3 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (long long int i_14 = 0; i_14 < 25; i_14 += 2) 
                {
                    for (unsigned short i_15 = 0; i_15 < 25; i_15 += 4) 
                    {
                        {
                            arr_54 [i_5] [i_12] [(_Bool)1] [i_13] [i_15] = ((/* implicit */unsigned char) (~(min(((+(((/* implicit */int) (unsigned char)254)))), (min((-1592781454), (arr_51 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [(unsigned char)8])))))));
                            var_32 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_47 [i_15] [i_15])) && (((/* implicit */_Bool) arr_40 [i_15] [i_13]))))) >> (((((((/* implicit */_Bool) arr_37 [i_12] [i_12 - 1] [i_12] [i_14])) ? (arr_36 [i_12]) : (((/* implicit */int) var_9)))) + (279409995)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_5]))) : (((unsigned int) (-(((/* implicit */int) var_7)))))));
                            arr_55 [i_13] [i_12] [i_12] [i_12 + 1] [i_12] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_37 [i_12] [i_12] [i_12 + 1] [i_12 + 2]) : (((/* implicit */unsigned long long int) 7LL))))) ? (((int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)56222))))) : (((/* implicit */int) min((arr_26 [i_12 + 2]), (arr_26 [i_12 + 2]))))));
                        }
                    } 
                } 
            } 
            var_33 = ((/* implicit */unsigned char) arr_30 [(unsigned char)11]);
            var_34 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 763211700)), (8097629621734634692ULL)));
        }
        /* vectorizable */
        for (int i_16 = 3; i_16 < 22; i_16 += 2) /* same iter space */
        {
            arr_58 [i_5] [i_16 - 3] = ((/* implicit */unsigned char) ((10349114451974916919ULL) % (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)7)))))));
            arr_59 [(unsigned char)3] [i_16] = ((/* implicit */unsigned short) arr_33 [i_16] [i_16] [i_5] [i_5]);
            arr_60 [i_16] [i_5] [(short)12] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_40 [i_5] [i_16 - 1])) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1325)))))));
            var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_34 [i_16 - 1] [i_16 + 2] [i_5])) ? (-763211715) : (((/* implicit */int) arr_34 [i_16 + 1] [i_16 - 3] [i_5]))));
        }
        for (int i_17 = 3; i_17 < 22; i_17 += 2) /* same iter space */
        {
            var_36 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_38 [i_5] [i_17] [8LL] [i_5] [17])), (arr_40 [i_5] [i_17 + 2])))) ? (((/* implicit */int) ((unsigned short) (short)32767))) : (((/* implicit */int) (unsigned short)4856)))), (((arr_57 [i_17 + 1] [i_5]) & (((/* implicit */int) (signed char)-25))))));
            var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((17918373421346445345ULL), (((/* implicit */unsigned long long int) 1592781473))))) ? ((+(1592781460))) : (arr_36 [i_5])));
        }
        var_38 = ((/* implicit */_Bool) arr_39 [i_5] [i_5] [i_5] [i_5] [i_5]);
    }
    var_39 = ((/* implicit */_Bool) (((+(var_0))) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-25)))));
}
